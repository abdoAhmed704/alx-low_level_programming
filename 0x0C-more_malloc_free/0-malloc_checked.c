#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
