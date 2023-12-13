#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings and returns
 * their memory allocation
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to be copied
 *
 * Return: Returns a char * pr a NULL pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *ptr = NULL;

	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	if (n < len2)
		len2 = n;

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
		return (NULL);

	if (s1 != NULL)
		memcpy(ptr, s1, len1);

	if (s2 != NULL)
		memcpy(ptr + len1, s2, len2);

	ptr[len1 + len2] = '\0';

	return (ptr);
}
