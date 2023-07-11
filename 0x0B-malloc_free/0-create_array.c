#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array.
 * @c: char to initializes.
 *
 * Return: pointer of an array of chars null or initializes
 */
char *create_array(unsigned int size, char c)
{
	char *cha;
	unsigned int k;

	if (size == 0)
		return (0);
	cha = malloc(size * sizeof(char));

	if (cha == 0)
		return (0);
	for (k = 0; k < size; k++)
		cha[k] = c;
	return (cha);
}
