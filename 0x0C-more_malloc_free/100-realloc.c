#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: the old pointer
 * @old_size: new size of the memory block
 * @new_size: the old size of ptr
 *
 * Return: the new pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	new_ptr = malloc(new_size);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new_ptr);
}
