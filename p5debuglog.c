gdb a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...done.
(gdb) b main
Breakpoint 1 at 0x87f: file p5original.c, line 31.
(gdb) r
Starting program: /home/runner/pps-IA1-practice-2/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p5original.c:31
warning: Source file is more recent than executable.
31    n=input();
(gdb) n
enter a number=
64
32    sqrt_result=my_sqrt(n);
(gdb) n
33    output(n,sqrt_result);
(gdb) n
square root of 64=8
34    return 0;