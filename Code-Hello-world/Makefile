# If KERNELRELEASE is defined, we've been invoked from the
# # kernel build system and can use its language.

obj-m := Hello_world_1.o
obj-m += Hello_world_2.o
obj-m += Hello_world_3.o
obj-m += Hello_world_4.o
obj-m += Hello_world_5.o
obj-m += Hello_world_param.o
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD  := $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod .*

