#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2-dimensional array.
 * @grid: The 2D array to be freed.
 * @height: The number of rows in the array.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
