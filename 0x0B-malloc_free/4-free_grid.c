#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  a function that frees a 2 dimensional grid previously i
 * created by your alloc_grid function.
 * @grid: grid of memories
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int k = 0;

	for (; k < height; k++)
		free(grid[k]);
	free(grid);
}
