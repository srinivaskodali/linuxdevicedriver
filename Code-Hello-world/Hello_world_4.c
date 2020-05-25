/*
 * Author: Srinivas Kodali
 * This file is a simple Hello world module to start with.
 * This file exposes the macros available in module.h to tell the more information the module
 */

#include <linux/init.h>
#include <linux/module.h>

/* Licence is must for eavery module, 
 * kernel will not load the module or raises a complaint if no license available for that module
 */
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Srini");
MODULE_DESCRIPTION("This module exposes the macros available in module.h to tell the more information the module");
MODULE_VERSION("1.0.0");
/*We will come to knwo about following macros later. DEVICE_TABLE describes about the device current modules handles with
 */
//MODULE_DEVICE_TABLE();

/* The name of the init function can be anything.
 * with module_init kernel macro, init function is defined.
 */
static int welcome(void) {
	/* KERN_ALERT is the high priority message. based on the priority debug meaages will be printed.
	 * This priority is just to stop the flooding of debug messages.
	 * priority is defined in klogd daemon.
	 */
	printk(KERN_ALERT "Hello, World...!\n");
	return 0;
}

/* The name of the exit function can be anything.
 * with module_exit kernel macro, exit function is defined.
 */
static void bye(void) {
	printk(KERN_ALERT "GoodBye, Cruel World...!\n");
}

module_init(welcome);
module_exit(bye);
