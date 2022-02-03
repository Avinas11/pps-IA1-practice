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
Breakpoint 1 at 0xa3c: file p8original.c, line 64.
(gdb) r
Starting program: /home/runner/pps-IA1-practice-4/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p8original.c:64
64  {
(gdb) n
65    int n = get_n();
(gdb) n
enter number of complex numbers5
66    Complex c[n],res;
(gdb) n
67    input_n_complex(n,c);
(gdb) n
enter the real value2
enter the imaginary value3
enter the real value45
enter the imaginary value6
enter the real value2
enter the imaginary value2
enter the real value2
enter the imaginary value35
enter the real value6
enter the imaginary value9
68    res = add_n_complex(n,c);
(gdb) 8
Undefined command: "8".  Try "help".
(gdb) n
69    output(n,c,res);
(gdb) n
2.000 + 3.000i
45.000 + 6.000i
2.000 + 2.000i
2.000 + 35.000i
6.000 + 9.000i
6.000 + 9.000i is
57.000 + 55.000i
70    return 0;
(gdb) 