# 0x18-dynamic_libraries

## A README file describing what each script is doing

# Resources
__Read or watch:__

 * [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
 * [create dynamic libraries on Linux](https://www.google.com/#q=linux+create+dynamic+library)

# Tasks

__0. A library is not a luxury but one of the necessities of life__ - [libdynamic.so](./libdynamic.so) - A dynamic library libdynamic.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
_If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your ```html
main.h
``` file in your repository, containing at least all the prototypes of the above functions._

## How To Create a Dynamic Library
_To make a Dynamic Library in Linux, use the 'gcc' command. It's like a recipe. First, it uses '-c' to create special building blocks called object files (.o) from your program's recipe book called source files (.c). Then, it adds a special touch with '-fPIC' to make sure the code is flexible.

So, the command is like asking the computer to make a bunch of building blocks (.o files) from each recipe (.c file) you have in your current folder_

```
gcc -c -fPIC *.c
```
