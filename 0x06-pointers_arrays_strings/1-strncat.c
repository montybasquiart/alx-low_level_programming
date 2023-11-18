#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: Number of elements to concatenate from src
 * Return: dest + n of src
 */

char *_strncat(char *dest, char *src, int n)

{
	int len_dest;
	int i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}
