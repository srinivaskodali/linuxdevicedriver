Modules run in kernel space. applications runs in user space.

Kernel executes in highest level(super user mode). applications run in lowest level(user mode).

This differentiation is to block the unnecessary hardware access & memory regions from the user space apps.

Execution of a program transfers from user to kernel, when an app issues a system call or by an hardware interrupt.
system call will be executed in kernel in the context of process. 
System call operates behalf fof caling process and able to access the process address space.

Handling of interrupts are asynchronous.

kernel modules can access the callers process context with the help of current data structure from linux/sched.h
Kernel code cannot do floating-point arithmetics. Doing so is extra overhead for the kernel.
And there is no need of it too.
