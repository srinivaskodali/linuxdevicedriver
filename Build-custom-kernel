1. Dependencies:
	kernel-package
	libncurses5-dev
	wget
	tar
	make
	gcc
	flex/flux
	bison
	libelf-dev/libelf-devel/elfutils-libelf-devel
	libssl-dev/openssl-devel

2. Donloading the kernel
	Sorce: www.kerne.org
	Select the kernel based on yout host OS kernel version. Check the Host kernel version using 'uname -a'.
	wget https://www.kernel.org/pub/linux/kernel/v5.x/linux-5.3.tar.gz

3. Building the kernel.
	It is a good practice to keep and build the kernel source from /usr/src directory.
	cd /usr/src
	wget https://www.kernel.org/pub/linux/kernel/v5.x/linux-5.3.tar.xz
	tar -xz linux-5.3.tar.gz
	ln -s linux-5.3 linux(optional step. shorter names are easy for traversal)
	cd linux
	make ARCH=x86_84 defconfig
	make -j40

Let the kernel build by taking its own time... have coffee, snacks... if possible dinner....

4. Installing the kernel
	make modules_install
	make install
		copy the bzimage,vmlinuz & initrd.img from arch/<>/bzImage to /boot/bzIMage-kernelversion
		copy the System.map to /boot/System.map-kerneversion
		copy the config to /boot/config-kernelversion
			Here kernelversion is the variable and its value is equals to vustom kernel version	
	
	
