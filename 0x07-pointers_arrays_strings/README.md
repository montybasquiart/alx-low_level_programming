# 0x07. C - Even more pointers, arrays and strings

# A README file describing what each script is doing
##
**Concepts**
_For this project, we expect you to look at these concepts:_
 * [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://intranet.alxswe.com/concepts/100039)
 * [Pointers and arrays](https://intranet.alxswe.com/concepts/60)
 ##
# Resources
**Read or watch:**
 * [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
 * [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
 * [Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
 * [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)
 ##
 # Additional Resources
 * [Arrays, Strings & Pointers in C Programming](https://www.youtube.com/watch?feature=shared&v=WxWv9_8xlac)
 ##
# Tasks
##
0. memset - [0-memset.c](./0-memset.c) - A function that fills memory with a constant byte.
	* Prototype: char *_memset(char *s, char b, unsigned int n);
	* The _memset_(() function fills the first n bytes of the memory area pointed to by s with the constant byte b
	* Returns a pointer to the memory area s
* FYI: The standard library provides a similar function: memset. Run man memset to learn more.
##
1. memcpy - [1-memcpy.c](./1-memcpy.c) - A function that copies memory area.
Prototype: char *_memcpy(char *dest, char *src, unsigned int n)*;
The _memcpy_() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest
FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.
##
2. strchr - [2-strchr.c](./2-strchr.c) - A function that locates a character in a string.
	* Prototype: char *_strchr(char *s, char c);
	* Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
* FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.
##
3. strspn - [3-strspn.c](./3-strspn.c) - A function that gets the length of a prefix substring.
	* Prototype: unsigned int _strspn_(char *s, char *accept);
	* Returns the number of bytes in the initial segment of s which consist only of bytes from accept
* FYI: The standard library provides a similar function: strspn. Run man strspn to learn more.
##
4. strpbrk - [4-strpbrk.c](./4-strpbrk.c) - A function that searches a string for any of a set of bytes.
	* Prototype: char *_strpbrk_(char *s, char *accept);
	* The _strpbrk()* function locates the first occurrence in the string s of any of the bytes in the string accept
	* Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
* FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.
##
5. strstr - [5-strstr.c](./5-strstr.c) - A function that locates a substring.
	* Prototype: char *_strstr(char *haystack, char *needle);
	* The _strstr()* function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
	* Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
	* FYI: The standard library provides a similar function: strstr. Run man strstr to learn more.
##
6. Chess is mental torture - [7-print_chessboard.c](./7-print_chessboard.c) - A function that prints the chessboard.
	* Prototype: void print_chessboard(char (*a)[8]);*
##
7. The line of life is a ragged diagonal between duty and desire - [8-print_diagsums.c](./8-print_diagsums.c) - A function that prints the sum of the two diagonals of a square matrix of integers.
	* Prototype: void print_diagsums(int *a, int size);
	* Format: see example
	* You are allowed to use the standard library
* Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.
##
8. Double pointer, double fun - [100-set_string.c](./100-set_string.c) - A function that sets the value of a pointer to a char.
	* Prototype: void set_string(char **s, char *to);***
##
9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure - [101-crackme_password](./101-crackme_password) - A file that contains the password for the crackme2 executable.

	* Your file should contain the exact password, no new line, no extra space
ltrace, ldd, gdb and objdump can help
	* You may need to install the openssl library to run the crakme2 program: sudo apt install libssl-dev
	* Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0 
