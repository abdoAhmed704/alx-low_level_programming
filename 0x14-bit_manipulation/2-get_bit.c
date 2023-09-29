#include "main.h"

/**
 * get_bit - gets bit index
 * @n: number index
 * @index: the wanted bit
 *
 * Return: the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
