#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * ie malloc(old_size)
 * @old_size: size in bytes allocated for ptr
 * @new_size: size of the new memory block
 *
 * Return: Returns the pointer to the new memory block
 * Return NULL if ptr is NULL
 * Return NULL if if new_size is zero and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	unsigned int memsize;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size <= old_size)
		return (ptr);
	/* new_ptr = realloc(ptr, new_size); */
	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		memsize = (old_size < new_size) ? old_size : new_size;
		memcpy(new_ptr, ptr, memsize);
		free(ptr);
	}
	return (new_ptr);
}
