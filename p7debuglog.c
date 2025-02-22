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
Breakpoint 1 at 0x8b2: file p7original.c, line 39.
(gdb) r
Starting program: /home/runner/pps-IA1-practice-2/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p7original.c:39
warning: Source file is more recent than executable.
39    a=input_chellox();
(gdb) n
enter real and imaginary numbers of first complex number=
2

3
40    b=input_chellox();
(gdb) n
enter real and imaginary numbers of first complex number=
5
6
41    c=add(a,b);
(gdb) n
42    output(a,b,c);
(gdb) n
2+3i+5+6i=7+9i
43    return 0;