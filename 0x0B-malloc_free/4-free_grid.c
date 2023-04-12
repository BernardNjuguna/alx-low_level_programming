#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory
 * @grid: memory allocated
 * @height: height input
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
