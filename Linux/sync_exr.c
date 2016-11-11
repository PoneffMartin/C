/*
Linux Kernel Exercise

Module that creates a char device entry and implements basic file operations.
On init of the module another thread is created which sleeps for 30 seconds.
By default the read operation is disabled by putting it on wait queue. After the worker thread wakes up, it enables the read function.
The device file is protected for with mutex, so it can be opened by one instance of the user-space program.
*/

#include <linux/module.h>
#include <linux/init.h>
#include <linux/device.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <asm/uaccess.h>
#include <linux/kthread.h>
#include <linux/mutex.h>

#define BUF_SIZE	64

static int major_number;
static int read_allowed = 0;
static int dev;
static const char *class_name = "csyncexr";
static const char *device_name = "dsyncexr";
static const char *sync_exr_worker_name = "sync_exr_worker";
static char message[BUF_SIZE];
static struct class *sync_exr_class;
static struct device *sync_exr_dev;
static struct mutex sync_exr_lock;
static struct task_struct *sync_exr_worker;
static wait_queue_head_t sync_exr_event;

static int sync_exr_open(struct inode *inodeptr, struct file *fileptr);
static int sync_exr_close(struct inode *inodeptr, struct file *fileptr);
static ssize_t sync_exr_read(struct file *fileptr, char *bufptr, size_t size, loff_t *offsetptr);
static ssize_t sync_exr_write(struct file *fileptr, const char *bufptr, size_t size, loff_t *offsetptr);
static int sync_exr_workerfn(void *data);


static struct file_operations fops =
{
  .open = sync_exr_open,
	.read = sync_exr_read,
	.write = sync_exr_write,
	.release = sync_exr_close,
};

static int sync_exr_open(struct inode *inodeptr, struct file *fileptr)
{
	/* Use mutex to lock the file for one process only */
	if (!mutex_trylock(&sync_exr_lock)) {
		pr_err("Device or resource busy!\n");
		return -EBUSY;
	}
	
	return 0;
}

static int sync_exr_close(struct inode *inodeptr, struct file *fileptr)
{
	/* Unlock the mutex */
	mutex_unlock(&sync_exr_lock);
	
	return 0;
}

static ssize_t sync_exr_read(struct file *fileptr, char *buffptr, size_t size, loff_t *offsetptr)
{
	/* Wait until read_allowed is true */
	wait_event_interruptible(sync_exr_event, read_allowed != 0);
	pr_err("%s Reading allowed.\n", __func__);
	if (size > BUF_SIZE) {
		pr_err("Trying to read more characters than allowed.\n");
		size = 64;
	}

	int ret = copy_to_user(buffptr, message, size);
	if (0 == ret) {
		pr_err("Successfully read %d characters.\n", size);
	} else {
		pr_err("Could not read %d characters.\n", ret);
		return -EFAULT;
	}
	
	return size;
}

static ssize_t sync_exr_write(struct file *fileptr, const char *buffptr, size_t size, loff_t *offsetptr)
{
	if (size > BUF_SIZE) {
		pr_err("Trying to write more characters than allowed.\n");
		size = 64;
	}
	int ret = copy_from_user(message, buffptr, size);
	if (0 == ret){
		pr_err("%s Successfully wrote %ld characters.\n", __func__, (long)size);
	} else {
		pr_err("%s Could not write %ld characters.\n", __func__, (long)size);
		return -EFAULT;
	}

	return size;
}

static int sync_exr_workerfn(void *data)
{	
	pr_err("%s Enter in worker thread.\n", __func__);
	set_current_state(TASK_INTERRUPTIBLE);		/* Sleep for 30 sec */
	schedule_timeout(30 * HZ);
	pr_err("%s Wake up after 30 seconds.\n", __func__);
	/* Allow reading */
	read_allowed = 1;
	wake_up_interruptible(&sync_exr_event);
	pr_err("%s Job done.\n", __func__);
	/* Wait until kthread_stop is called */
	while (!kthread_should_stop()) {
		schedule();
	}
	
	return 0;
}

static int __init sync_exr_init(void)
{
	major_number = register_chrdev(0, device_name, &fops);
	if (major_number < 0) {
		pr_err("%s failed to register major number\n", __func__);
		return major_number;
	}

	dev = MKDEV(major_number, 0);

	if (IS_ERR(sync_exr_class = class_create(THIS_MODULE, class_name))) {
		unregister_chrdev(major_number, device_name);
		return PTR_ERR(sync_exr_class);
	}

	if (IS_ERR(sync_exr_dev = device_create(sync_exr_class, NULL, dev, NULL, device_name))) {
		class_destroy(sync_exr_class);
		unregister_chrdev(major_number, device_name);
		return PTR_ERR(sync_exr_dev);
	} 

	/* Initialize the mutex */
	mutex_init(&sync_exr_lock);
	
	/* Initialize wait queue */
	init_waitqueue_head(&sync_exr_event);
	
	/* Create the worker thread */
	sync_exr_worker = kthread_create(sync_exr_workerfn, NULL, sync_exr_worker_name);

	if (!IS_ERR(sync_exr_worker)) {
		wake_up_process(sync_exr_worker);	/* Start the thread */
	}
	
	return 0;
}

static void __exit sync_exr_exit(void)
{
	kthread_stop(sync_exr_worker);
	device_destroy(sync_exr_class, dev);
	class_unregister(sync_exr_class);
	class_destroy(sync_exr_class);
	unregister_chrdev(major_number, device_name);
	mutex_destroy(&sync_exr_lock);
	pr_err("%s Bye Bye", __func__);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Martin Ponev");

module_init(sync_exr_init);
module_exit(sync_exr_exit);
