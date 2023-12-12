#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - a function to create a 2d integer grid using malloc
 * Description: Each element of the grid should be initialized to 0.
 * @width: width of the grid
 * @height: heigh of the grid
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int a,b;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	matrix = malloc(height * sizeof(int*));
	if (matrix == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		matrix[a] = malloc(width * sizeof(int));
		if (matrix[a] == 0)
		{
			for (b = 0; b < a; b++)
				free(matrix[b]);
			free(matrix);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			matrix[a][b] = 0;
	}
	return (matrix);
}
