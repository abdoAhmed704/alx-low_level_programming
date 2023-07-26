#include <stdio.h>
/**
 * int_index - knowing the index
 * @array: an array
 * @size: the size of array
 * @cmp: pointer to a function
 *
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
