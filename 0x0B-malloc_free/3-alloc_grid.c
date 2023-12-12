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
	int **grid;
	int a, b;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == 0)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
