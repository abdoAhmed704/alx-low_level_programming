#include "main.h"

/**
 * print_binary - prints binary string
 * @n: number to print
 *
 * Return: (void)
 */
void print_binary(unsigned long int n)
{
	int bitt = sizeof(n) * 8, pr = 0;

	while (bitt)
	{
		if (n & 1L << --bitt)
		{
			_putchar('1');
			pr++;
		}
		else if (pr)
			_putchar('0');
	}
	if (!pr)
		_putchar('0');
}

