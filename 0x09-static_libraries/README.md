# 0x09. C - Static libraries

# A README file describing what each script is doing
##
__Concepts__
_For this project, we expect you to look at this concept:_
 * [C static libraries](https://intranet.alxswe.com/concepts/61)
 ##
# Resources
__Read or watch:__
 * [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
 * [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
 * [Using A “C” Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
 * [What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)](https://www.youtube.com/watch?v=eW5he5uFBNM)
##
# Tasks
##
0. A library is not a luxury but one of the necessities of life - [libmy.a,](./libmy.a,) - A program that creates the static library [libmy.a](./libmy.a) containing all the functions listed below:
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
char *_strstr_(char *haystack, char *needle);
```
* If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.
##
1. Without libraries what have we? We have no past and no future - [create_static_lib.sh](./create_static_lib.sh) - A script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
