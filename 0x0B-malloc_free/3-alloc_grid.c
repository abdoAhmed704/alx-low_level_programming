#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: The number of columns.
 * @height: The number of rows.
 *
 * Return: A 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **Ptr = NULL;
	int width_index, height_index;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	Ptr = (int **)malloc(height * sizeof(int *));

	if (Ptr == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		Ptr[height_index] = (int *)malloc(width * sizeof(int));
		if (Ptr[height_index] == NULL)
		{
		/**Free previously allocated memory**/
			for (int i = 0; i < height_index; i++)
				free(Ptr[i]);
			free(Ptr);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < height; width_index++)
		{
			Ptr[height_index][width_index] = 0;
		}
	}

	return (Ptr);
}
