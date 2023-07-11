#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: dimension of grid
 * Description: frees memory of grid
 * Return: Nothing
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
