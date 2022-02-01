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
Breakpoint 1 at 0x88a: file p4original.c, line 32.
(gdb) r
Starting program: /home/runner/pps-IA1-practice-2/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p4original.c:32
32  {
(gdb) n
34    n=input();
(gdb) n
enter n
3
35    aray(n,a);
(gdb) n
enter elements:
1
enter elements:
7
enter elements:
11
36    sum=add(n,a);
(gdb) 
37    output(sum);
(gdb) 
38    return 0;
(gdb) 
39  }(gdb) 
__libc_start_main (main=0x562828600882 <main>, argc=1, 
    argv=0x7ffe9e8853d8, init=<optimized out>, fini=<optimized out>, 
    rtld_fini=<optimized out>, stack_end=0x7ffe9e8853c8)
    at ../csu/libc-start.c:344
344 ../csu/libc-start.c: No such file or directory.
(gdb) n
sum is19[Inferior 1 (process 822) exited normally]
(gdb) 