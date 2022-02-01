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
Breakpoint 1 at 0x7cf: file p1original.c, line 24.
(gdb) r
Starting program: /home/runner/pps-IA1-practice-2/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p1original.c:24
24  {
(gdb) n
26    a=input();
(gdb) n
enter value45
27    b=input();
(gdb) n
enter value56
28    result=add(a,b,&sum);
(gdb) n
29    output(a,b,result);
(gdb) n
31    return 0;
(gdb) n
32  }(gdb) n
__libc_start_main (main=0x55d9562007c7 <main>, argc=1, 
    argv=0x7ffc28c52fc8, init=<optimized out>, fini=<optimized out>, 
    rtld_fini=<optimized out>, stack_end=0x7ffc28c52fb8)
    at ../csu/libc-start.c:344
344 ../csu/libc-start.c: No such file or directory.
(gdb) n
sum of 2 numbers 45+56=101[Inferior 1 (process 167) exited normally]
(gdb) 