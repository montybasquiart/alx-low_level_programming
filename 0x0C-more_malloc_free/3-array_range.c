#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of a range of sorted numbers
 * @min: minmum number in the range
 * @max: maximum number in the range
 *
 * Return: Returns a pointer to location containing the arranged numbers
 * if min > max or if malloc fails, it Returns NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max || max - min + 1 < 1)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		ptr[i] = min + i;

	return (ptr);
}
