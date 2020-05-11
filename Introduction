Device driver is an interface(a software layer) between Real hardware & the software. Its a kernel code to access the hardware.
One particular can have multiple drivers but a driver cannot support multiple hardwares.

Kernel functionalities:
Process management:
Multiple processes shared the single CPU. 
Process not even know & does not bother that actually it is sharing the CPU resource with other peer process.
kernel process management implements the activity of scheduling the CPU resources to the different processes. 
And the same takes care to achieve the communication between multiple process sugin IPC, signal & pipes.

Memory managemnt:
memory management subsystem is parts of kernel and creates a virtual memory space and makes it available for the processes. 
All the processes which wants to access memory should interact with memory management.

File systems:
Hardware is unstructural to access it directly. Kernel makes it structural by buiding a file system on top of it.
It will be useful to abstract the hardware.

Device Control:
Most of the system operations in linux are mapped with a physical devices. 
Ofcourse, few are exceptional such as memory & process related.
All the device controlled operations are specific to a physical device and the code is called as device driver.
All the peripherals have a device driver which is part of kernel either as a module or inbuilt in kernel.

Networking:
Networking stack is part of kernel. And most of the operations are managed by operatins system.

Modules:
Linux has ability to extend functionality during runtime. 
The code (object) which can be added to the system while it is running is called module. And the same can be removed from the system.
Kernel provides a program called insmod to load the module & rmmod to unload the module.

Devices:
Linux sees every device in one of the following way
1. char device
    A char device can access a stream of bytes similar to file operations. 
    But only the difference is char devices can access sequntial data and moving back and forth is not possible.
    Examples are /dev/consoe, /dev/tty* & etc. Few char devices which has the data areas can be back and forth just like a noraml file,
    but the entire data area can me mapped using mmpa or lseek.
2. block device
    Block devices can access the devices under /dev. 
    Block devices deals with a data chunk and holds a fili system to it just like hard disks.
    Block devices are different from the char devices in the way of data managed by the kernel.
    512 bytes data can read the using block devices.
3. network device

Here is the block diagram of the kernel:
  To be updated
  
  
