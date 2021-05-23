A module may expect the command line arguments just like an user program.

List of datatypes supported,
	bool
	character pointer - charp
	int
	short
	long
	uint
	ulong
	ushort

A variable should be defined in module before it reads using the following APIs.
These apis are availble in linux/moduleparam.h
module_param(<var>,<type of the variable>, permission)
module_param_array(<var>,<type>,length,permission)
