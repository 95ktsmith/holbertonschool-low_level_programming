#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free grid
 * Description: frees the memory allocated for a 2d array
 * @grid: Pointer to 2d array
 * @height: Number of arrays in the grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
