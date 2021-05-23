Modules needs to be compiled for every kernel release as they are coupled with kernel data strutcutres and prototypes.
During the module build, a versionmagic information will be linked to the module object. and its part of .modinfo section.
	Contents of section .modinfo:
	 0000 6c696365 6e73653d 4475616c 20425344  license=Dual BSD
	 0010 2f47504c 00000000 64657065 6e64733d  /GPL....depends=
	 0020 00726574 706f6c69 6e653d59 006e616d  .retpoline=Y.nam
	 0030 653d4865 6c6c6f5f 776f726c 645f3100  e=Hello_world_1.
	 0040 7665726d 61676963 3d352e33 2e306c64  vermagic=5.3.0ld
	 0050 6420534d 50206d6f 645f756e 6c6f6164  d SMP mod_unload
	 0060 2000 
	Objedump -D <Hello_world_1.ko> will give this information.

And this versoinmagic will be validated while inserting the module. 
If there is mismatch in this section against the current running kernel configuration, module load will fail.

If a module needs to be build against a particular code, linux/module.h provides following macros to be used in Makefile aswell as code.
UTS_RELEASE: Kernel version with srting format. "5.3.0"
LINUX_VERSION_CODE: binary representation of kernel version. One byte represents each part of kernel version. 
	322448(Decimal equivalent to binary)/0x050300(Hex)/"5.3.0"
KERNEL_VERSION: this representation is as same as LINUX_VERSION_CODE
