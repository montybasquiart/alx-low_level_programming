#include "main.h"

/**
 * _strcmp - compares two character strings ( str1 and str2 )
 * @s1: first string
 * @s2: second string
 * Return: (0) when it is the same
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;

	for (i = 0; s1[i] != '\0' && j == 0; i++)
	{
		j = s1[i] - s2[i];
	}

	return (j);
}
