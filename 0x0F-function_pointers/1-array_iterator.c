#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: an array
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *k = array + size - 1;

	if (array != 0 && size != 0 && action != 0)

		while (array <= k)
			action(*array++);

}
