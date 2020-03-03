#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate grid
 * Description: allocates a 2D array of given height and width, initializes 0
 * @height: Number of arrays
 * @width: Length of each array
 * Return: Pointer to start of 2D array
 */

int **alloc_grid(int width, int height)
{
	int hindex, windex;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * 8);
	if (grid == NULL)
		return (NULL);

	for (hindex = 0; hindex < height; hindex++)
	{
		grid[hindex] = malloc(width * 4);
		if (grid[hindex] == NULL)
			return (NULL);

		for (windex = 0; windex < width; windex++)
			grid[hindex][windex] = 0;
	}
	return (grid);
}
