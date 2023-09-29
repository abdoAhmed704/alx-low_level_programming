#include "main.h"

/**
 * binary_to_uint - converts a binary
 * @b: a string
 *
 * Return: the unsigned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		sum = sum * 2 + (*b++ - '0');
	}
	return (sum);
}
