#include "main.h"

/**
 * *_memset - a function fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; n > 0; num++, n--)
	{
		s[num] = b;
	}

	return (s);
}
