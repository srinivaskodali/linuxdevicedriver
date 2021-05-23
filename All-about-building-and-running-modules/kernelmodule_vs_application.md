Applications are desigend to perform a single/multiple task, once it is executed.
Ofcourse, few applications are exceptions as they wait for future events.
But all thr kernel modules are event based and they are waiting for the future requests.

User applications are depends on the library functions. 
	Those functions will work only if the respective library is linked
Kernel modules are linked with only APIS exposed by kernel. 
	There is no concept of libraries in kernel	
