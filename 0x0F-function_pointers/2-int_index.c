#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *
 * @array: the name of the array
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: the Index
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size != 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	else
	{
		return (-1);
	}
}
