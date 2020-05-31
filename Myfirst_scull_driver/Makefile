obj-m := srini_chardrv.o srini_dyn_chrdev.o
srini_chardrv-objs := myfirst_chardriver.o
srini_dyn_chrdev-objs := myfirst_dyn_chardriver.o

PWD := $(shell pwd)
KERNEL_DIR := /lib/modules/$(shell uname -r)/build

default:
	make -C $(KERNEL_DIR) M=$(PWD) modules

clean:
	rm -rf *.ko *.o modules.order Module.symvers srini_chardrv* srini_dyn_chrdev*
