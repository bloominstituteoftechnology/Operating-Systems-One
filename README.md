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

## Kernel, Scheduling, Memory Management, Drivers

The Kernel is a compiled program that runs the CPU and every piece of fundamental hardware and software in your computer. The Windows and OS X kernels are completely secret and proprietary, but the Linux kernel is available on github (btw, Linus Torvalds also built Git)!

[Linux Kernel](https://github.com/torvalds/linux)

This enables curious developers to build and install a new kernel to their own computer. This is the only opportunity for this outside of private employment with Microsoft or Apple.








