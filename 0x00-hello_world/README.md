# 0x00. C - Hello, World

# A README file describing what each script is doing

##

## Concepts
_For this project, we expect you to look at these concepts:_

* [C programming](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240206%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240206T220826Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=0d88cc870d8049523b78ee579af98bea0601e76b70f02e95bb6969cc273c2d2c)
* [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://intranet.alxswe.com/concepts/100039)

##

0. Preprocessor - [0-preprocessor](./0-preprocessor) - A script that runs a C file through the preprocessor and save the result into another file.
* The C file name is saved in the variable $CFILE
* The output is saved in the file c

1. Compiler - [1-compiler](./1-compiler) -  A script that compiles a C file but does not link.
* The C file name is saved in the variable $CFILE
* The output file name is the same as the C file, but with the extension .o instead of .c .
* E.g. if the C file is main.c, the output file should be main.o

2. Assembler - [2-assembler](./2-assembler) - A script that generates the assembly code of a C code and save it in an output file.
* The C file name is saved in the variable $CFILE
* The output file name is the same as the C file, but with the extension .s instead of .c
* E.g. If the C file is main.c, the output file should be main.s

3. Name - [3-name](./3-name) - A script that compiles a C file and creates an executable named cisfun
* The C file name will be saved in the variable $CFILE.

4. Hello, puts - [4-puts.c](./4-puts.c) - A C program that prints exactly "Programming is like building  multilingual puzzle", following a new line.
* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0

5. Hello, printf - [5-printf.c](./5-printf.c) - A C program that prints exactly "with proper grammar, but the outcome is a piece of art, followed by a new line.
* Use the function printf
* You are not allowed to use the function puts
* Your program should return 0
* Your program should compile without warning when using the -Wall gcc option

6. Size is not grandeur, and territory does not make a nation - [6-size.c](./6-size.c) - A C program that prints the size of various types on the computer when it is run on.
* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might to install the package libc6-dev-i386 on your Linus to test the -m32 gcc option

7. Intel - [100-intel](./100-intel) - A script that generates the assembly code (intel syntax) of a C code and save it in an output file.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s, instead of .c
* E.g. If the C file is main.c, the output file should be main.s

8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity - [101-quote.c](./101-quote.c) - A C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
* You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
* Your program should return 1
* Your program should compile without any warnings when using the -Wall gcc option.
