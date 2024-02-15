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
3. strcmp - [3-strcmp.c](./3-strcmp.c) - A function that compares two strings.
   * Prototype: int _strcmp(char *s1, char *s2);
   * Your function should work exactly like strcmp
* FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.
##
4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy - [4-rev_array.c](./4-rev_array.c) - A function that reverses the content of an array of integers.
   * Prototype: void reverse_array(int *a, int n);
   * Where n is the number of elements of the array
##
5. Always look up - [5-string_toupper.c](./5-string_toupper.c) - A function that changes all lowercase letters of a string to uppercase.
   * Prototype: char *string_toupper(char *);


