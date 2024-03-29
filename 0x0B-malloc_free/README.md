# 0x0B. C - malloc, free

## A README file describing what each script is doing

### Concepts
__For this project, we expect you to look at this concept:__

 * [Automatic and dynamic allocation, malloc and free](https://intranet.alxswe.com/concepts/62)
##
# Resources
_Read or watch:_

 * [0x0a - malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240227%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240227T101726Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=145f81136a7bf84f74a8ba3c4a3704a31f18cb9fcaf8091427edb46421142be2)
 * [Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)](https://www.youtube.com/watch?v=xDVC3wKjS64)
##
#Tasks
0. Float like a butterfly, sting like a bee - [0-create_array.c](./0-create_array.c) - A function that creates an array of chars, and initializes it with a specific char.
	* Prototype: char *create_array(unsigned int size, char c);
	* Returns NULL if size = 0
	* *Returns a pointer to the array, or NULL if it fails
##
1. The woman who has no imagination has no wings - [1-strdup.c](./1-strdup.c) - A  function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
	* Prototype: char *_strdup(char *str);
	* The  _strdup()_* *function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
	* Returns NULL if str = NULL
	* On success, the _strdup_ function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
* FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.
##
3. If you even dream of beating me you'd better wake up and apologize - [3-alloc_grid.c](./3-alloc_grid.c) - A function that returns a pointer to a 2 dimensional array of integers.
	* Prototype: int **alloc_grid(int width, int height);
	* Each element of the grid should be initialized to 0
	* The function should return NULL on failure
	* If width or height is 0 or negative, return NULL**
##
4. It's not bragging if you can back it up - [4-free_grid.c](./4-free_grid.c) - A function that frees a 2 dimensional grid previously created by your alloc_grid function.
	* Prototype: void free_grid(int **grid, int height);
	* Note that we will compile with your alloc_grid.c file. Make sure it compiles.**
##
5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe - [100-argstostr.c](./100-argstostr.c) - A function that concatenates all the arguments of your program.
	* Prototype: char *argstostr(int ac, char **av);*
	* Returns NULL if ac == 0 or av == NULL
	* Returns a pointer to a new string, or NULL if it fails
	* Each argument should be followed by a \n in the new string
##
6. I will show you how great I am - [101-strtow.c](./101-strtow.c) - A function that splits a string into words.
	* Prototype: char **strtow(char *str);*
	* The function returns a pointer to an array of strings (words)
	* Each element of this array should contain a single word, null-terminated
	* The last element of the returned array should be NULL
	* Words are separated by spaces
	* Returns NULL if str == NULL or str == ""
	* If your function fails, it should return NULL


