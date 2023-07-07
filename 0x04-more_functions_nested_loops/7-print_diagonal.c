#include "main.h"

/**
 * print_diagonal - function  draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character
*/
void print_diagonal(int n)
{
	int spc, i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (spc = 0; spc < i; spc++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
