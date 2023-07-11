#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array
 * @grid: grid width
 * @height: dimension of grid height
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
