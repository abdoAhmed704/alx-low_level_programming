#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: the width
 * @height: the height
 * Return: pointer of array
 */
int **alloc_grid(int width, int height)
{
	int **ptr, a, b;

	ptr = malloc(sizeof(*ptr) * height);
	if (width <= 0 || ptr == 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < height; a++)
		{
			ptr[a] = malloc(sizeof(**ptr) * width);
			if (ptr[a] == 0)
			{
				while (a--)
					free(ptr[a]);
				free(ptr);
				return (NULL);
			}
			for (b = 0; b < width; b++)
				ptr[a][b] = 0;
		}
	}
	return (ptr);
}
