#include "main.h"

/**
 * strncpy - Copies a string
 * @dest: destination string
 * @src: source string
 * @n: no of strings to copy
 * Return: return dest char pointer to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
