#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 64

static const char *dev_name = "/dev/dsyncexr";
static char message[BUF_SIZE];

int main()
{
	int fd;						/* File descriptor */
	int ret;					/* Return code */
	int len;					/* Message length */

	fd = open(dev_name, O_RDWR);
	if (fd < 0) {
		perror("Failed to open file");
		return errno;
	}		
	printf("Enter a message up to 64 characters:\n");
	fgets(message, BUF_SIZE, stdin);
	len = strlen(message);
	if (message[len - 1] == '\n') {
		message[len - 1] = '\0';
		len--;
	}
	ret = write(fd, message, len);
	if (ret < 0) {
		perror("Failed to write to device");
		return errno;
	}
	printf("Press ENTER to read from device.");
	getchar();
	memset(message, '\0', BUF_SIZE);	/* Clear the message buffer */
	ret = read(fd, message, len);
	if (ret < 0) {
		perror("Failed to read from device");
		return errno;
	}
	printf("Read message is: %s\n", message);

	close(fd);
	if (fd < 0) {
		perror("Close failed");	
		return errno;
	}

	return 0;
}
