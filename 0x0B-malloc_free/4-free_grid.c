#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees array
 * @grid: grid
 * @height: dimension of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
