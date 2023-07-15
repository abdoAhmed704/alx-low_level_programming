#include "main.h"
/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @new_size: size of the new memory.
 * @old_size: size of the old memory.
 * @ptr: pointer to memory allocated with malloc(old_size).
 *
 * Return: ptr if isn't NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
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
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		return (m);
	}
	if (new_size > old_size)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)m + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (m);
}
