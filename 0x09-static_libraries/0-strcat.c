#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{

	}

	for (len2 = 0; src[len2] != '\0'; len2++)
	{

	}

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
