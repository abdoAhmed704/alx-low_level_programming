#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minmum int
 * @max: maxmum int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *m;
	int l, k;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	m = malloc(sizeof(int) * l);
	if (!m)
		return (NULL);
	for (k = 0; k < l; k++)
		m[k] = min++;
	return (m);
}
