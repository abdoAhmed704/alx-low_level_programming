#include "main.h"

/**
 * set_bit - sets the bit
 * @n: number index
 * @index: setted bit
 *
 * Return: 1 if ok, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
