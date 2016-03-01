#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/kernel.h>

MODULE_AUTHOR("Martin Ponev");
MODULE_DESCRIPTION("Creates new entry in /proc and echoes argument given");


char * arg="Default";
module_param(arg, charp, 0);

static int proc_entry_show(struct seq_file *m, void *v) {
  seq_printf(m, "%s\n", arg);
  return 0;
}

static int proc_entry_open(struct inode *inode, struct  file *file) {
  return single_open(file, proc_entry_show, NULL);
}

static const struct file_operations proc_fops = {
  .owner = THIS_MODULE,
  .open = proc_entry_open,
  .read = seq_read,
  .llseek = seq_lseek,
  .release = single_release,
};

static int __init proc_entry_init(void) {
  proc_create("justASimpleModule", 0, NULL, &proc_fops);
  return 0;
}

static void __exit proc_entry_exit(void) {
  remove_proc_entry("justASimpleModule", NULL);
  printk(KERN_ALERT "Module removed");
}

MODULE_LICENSE("GPL");
module_init(proc_entry_init);
module_exit(proc_entry_exit);
