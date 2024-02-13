# 0x06. C - More pointers, arrays and strings

# A README file describing what each script is doing

##
### Concepts
__For this project, we expect you to look at this concept:__

 * [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://intranet.alxswe.com/concepts/100039)
 ##
# Additional Resource
 * [Practical Use of Pointers in C Programming](https://www.youtube.com/watch?feature=shared&v=KzLC_9VAoX0)
 
# Tasks
0. strcat - [0-strcat.c](./0-strcat.c) - A function that concatenates two strings.
    * Prototype: char *_strcat(char *dest, char *src);
    * This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
    * Returns a pointer to the resulting string dest
* FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.
##
1. strncat - [1-strncat.c](./1-strncat.c) - A  function that concatenates two strings.
   * Prototype: char *_strncat(char *dest, char *src, int n);
   * The _strncat function is similar to the _strcat function, except that
     	 * it will use at most n bytes from src; and
   	 * src does not need to be null-terminated if it contains n or more bytes
   * Return a pointer to the resulting string dest
* FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.
##
2. strncpy - [2-strncpy.c](./2-strncpy.c) - A function that copies a string.
   * Prototype: char *_strncpy(char *dest, char *src, int n);
   * Your function should work exactly like strncpy
* FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.
##

