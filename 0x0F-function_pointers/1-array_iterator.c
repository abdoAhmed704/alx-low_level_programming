#include "function_pointers.h"

/**
 * array_iterator - print the Elmes of Array
 *
 * @array: the name of the array
 * @size: size of the array
 * @action: pointer to function
 *
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (size != 0 && action && array)
	{
		for (index = 0; index < size; index++)
			action(array[index]);
	}
}
