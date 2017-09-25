# Operating Systems One

There are three operating systems that are primarily popular on general purpose computers - Windows, Mac OS X, and Linux. 
There are two operating systems that are essential for popular handhelds - Android and iOS.
There are dozens of UNIX variants for simpler processors available. Typically when working with a small dedicated cpu (like an ARM CPU on an IoT device), the operating system supported for that device has been defined by the manufacturer of the device and is a subset of Linux.

### Windows

Original popular OS for consumers, no permissions enabled fast and easy development, high performance for games and other user applications. Became a difficult model to maintain with the rise of the internet, leading to many revisions.

Backwards compatibility is the hallmark of Windows, which causes endless headache for modern developers.

Old development paradigms:

New development paradigms:

Technologies you need to be familiar with:

### Linux

Started by Linus Torvalds, who was at the time a student of Andrew Tanenbaum's, the Linux kernel is a copy of the MINIX kernel, which had been created by his instructor. MINIX is copy of the POSIX, an industry standardized system interface that was originally released in 1988. At the time there were many variants of UNIX, all limited to mainframe computers like VAX and PDP systems. The core of UNIX at this time is POSIX, which is the basis for essentially every successful operating system except Windows.

There are dozens of Linux forks at this time, called distros. Ubuntu is the most famous and successful of these, and unless you want to build up a career in system administration it is not necessary to learn any others. The basics of the Linux operating system depend on a few basic philosophies - processes that accept streams of text as input and produce streams of text as output (pipes), file descriptors as references to device drivers and other hardware (including individual files stored on a permanent storage medium), and security enforced by basic access controls applied to every component of the system.

Development paradigms:

C and C++ native development.
Management of symbolic and dynamic links via /usr/lib and /usr/local/lib and /usr/include and many more. Dependencies in linux are stored in files with specific paths, and can either be built natively using `gcc` or loaded using package management.

Technologies you need to be familiar with:

Bash and shell scripting
SSH
X11
Network programming
System calls

### OS X

OS X is another fork of UNIX, now called Darwin but previously FreeBSD, which was created in the 90s by Berkely (Berkeley Software Distribution). OS X features a kernel and basic system libraries that are nearly identical to Linux, with many small differences. OS X's graphics layer, Cocoa, differs substantially from Linux graphics layers, features much greater reliability and consistency, and uniquely supports development in Objective-C and Swift.

Technologies you need to be familiar with:
Objective-C
Interface builder

# Pre-Operating System Technology

## Built-In Operating System (BIOS)

When your computer first boots, it provides power to various electronics components according to the design of the hardware. As each component powers up it executes a Power On Self Test. If POST succeeds, a very small operating system is activated with low level drivers to read and write memory, hard disks, simple display output, and potentially network cards.

The BIOS attempts to read the first sector of the boot disc. In the first sector is the Boot Loader, which shows the BIOS which hard disk sector to execute first in order to activate the real operating system.  

In Windows, the Boot Loader is called the Master Boot Record. In Linux, it is GRUB or LILO. OS Xs Boot Loader is entirely proprietary.

# Operating System Technology

## Boot-loader

## Kernel

The Kernel is a compiled program that runs the CPU and every piece of fundamental hardware and software in your computer. The Windows and OS X kernels are completely secret and proprietary, but the Linux kernel is available on github (btw, Linus Torvalds also built Git)!

[Linux Kernel](https://github.com/torvalds/linux)

This enables curious developers to build and install a new kernel to their own computer. This is the only opportunity for this outside of private employment with Microsoft or Apple.

## Processes

Every operating system provides the fundamental concept of a process. Processes are applications that run in user space.

### Process table

The operating system allocates a list of processes called the process table. The process table is an array data about each process, such as where in memory its stack is located, what local data is needed for the currently executing stack frame, the id of the process, and much more.


## Scheduling

The kernel is responsible for sharing resources on a system between multiple processes. In the early days of large mainframes, operating systems did not support multi-tasking. Booting a computer might load the basic resources necessary to access registers, memory, and I/O. Once that boot process was complete, the system would load a single program which would run until completion.

Modern operating systems support mult-tasking, which means that the operating system runs multiple applications at the same time. Because a CPU in general can only perform one activity at a time, the operating system loads processes, their stack frames, and their stack resources in a round-robin fashion.

[Image of stack frames being loaded in and out of execution]

Each time a process is paused, its entire execution state is saved into main memory. The next processes stack frame is loaded from main memory, and execution is resumed.

## Memory Management

The operating system is responsible for providing user programs access to memory. The operating system creates a stack frame at the beginning of a program's execution and allocates a section of available free memory for it to utilize. The program's memory space begins essentially at 0, and it has no knowledge of any memory outside of the memory that has been allocated to it by the operating system.

This is one of the fundamental attack vectors used in attempting to take malicious control of a computer. The operating system is responsible for perfectly isolating each process from one another - if a process is able to gain access to memory other than what has been assigned to it it will be able to hijack the system.


## Drivers

Drivers combine, assembly language, C code, and interrupt-driven programming to provide software control of physical devices.

On general purpose computers like Kaby Lake machines, all drivers are written to control hardware on the other side of the PCIx bus. Hardware is built with a PCIx bus controlller, and driver commands configure binary messages to be sent and retrieved from the hardware over that bus.

In smaller systems like IoT and firmware devices, the bus may be a true parallel bus that is shared between the CPU and the device. These buses are synchronized by the system clock. Drivers on these systems have to know how to take control of the hardware device at the hardware level and can be written to any degree of specificity.

How to write drivers on the PCIx bus or on a parallel bus is a lesson in Computer Engineering, not covered here at Lambda School.

## File System

[File systems at The Linux Documentation Project.org](http://www.tldp.org/LDP/sag/html/filesystems.html)

Files are read and written from internal storage using PCIx drivers dedicated to controlling hard disks. The operating system keeps a record of all of the files in the system, called the File Table.


### File table features:
- Contiguity
- Redundancy
- Small overhead

Dozens of specific file systems 

# Assignments




