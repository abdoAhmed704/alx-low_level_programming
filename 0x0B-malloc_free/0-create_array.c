#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of
 * chars and initializes it with a specific char.
 * @size: an integer
 * @c: a character
 *
 * Return: pointer to the created array, or
 * NULL if size is 0 or allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = (char *)calloc(size, sizeof(char));
	if (buffer == NULL)
		return (NULL);

	while (size > 0)
	{
		buffer[size - 1] = c;
		size--;
	}

	return (buffer);
}
