#include "main.h"

/**
 * flip_bits - number of bits that be flipped to
 * transform one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int counter = 0;

	while (xor)
	{
		if (xor & 1ul)
			counter++;
		xor = xor >> 1;
	}
	return (counter);
}
