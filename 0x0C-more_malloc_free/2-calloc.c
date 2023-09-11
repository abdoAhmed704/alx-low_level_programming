#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elem
 * @size: type of bytes
 *
 * Return: pointer to the allocated memory.
 *
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb); i++)
		ptr[i] = 0;

	return (ptr);
}
