/*
 * Author: Srinivas Kodali
 * This file is a char driver which registers and frees the device number.
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/fs.h>

/* Licence is must for eavery module, 
 * kernel will not load the module or raises a complaint if no license available for that module
 */
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Srini");
MODULE_DESCRIPTION("This is a simple char driver which registers  & freesfrom kernel");
MODULE_VERSION("1.0.0");
/*We will come to knwo about following macros later. DEVICE_TABLE describes about the device current modules handles with
 */
//MODULE_DEVICE_TABLE();

dev_t dev_num = 0;
/* The name of the init function can be anything.
 * with module_init kernel macro, init function is defined.
 * __init modifier tells to the module loader that, this function is an initialization function and 
 * 	discards this function once module is successfullt loaded.
 */
static int __init register_driver(void) {
	/* KERN_ALERT is the high priority message. based on the priority debug meaages will be printed.
	 * This priority is just to stop the flooding of debug messages.
	 * priority is defined in klogd daemon.
	 */
	if (!alloc_chrdev_region(&dev_num, 20, 50, "srini_snull"))
		printk(KERN_ALERT "Hello, World...!\n \
				New char driver srini_snull reigstered with major number [%d], \
				minor number [%d]\n", MAJOR(dev_num), MINOR(dev_num));
	return 0;
}

/* The name of the exit function can be anything.
 * with module_exit kernel macro, exit function is defined.
 * __exit modifier tells to the module loader that, this function is an exit function and 
 * 	stores this in a special location and can be used only at thee time of module unloading
 */
static void __exit deregister(void) {
	unregister_chrdev_region(dev_num, 50);
		printk(KERN_ALERT "Hello, World...!\n \
				New char driver srini_snull dereigstered with major number [%d], \
				minor number [%d]\n", MAJOR(dev_num), MINOR(dev_num));
}

module_init(register_driver);
module_exit(deregister);
