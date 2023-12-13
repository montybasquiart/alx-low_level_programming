#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements to be allocated memory for
 * @size: size of memory to be allocated
 *
 * Return: Returns a pointer to the allocated location
 * Returns NULL if malloc fails
 * If nmember or size is 0 the function return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t t_size;

	t_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(t_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, t_size);

	return (ptr);
}
