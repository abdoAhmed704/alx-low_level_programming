#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n : number of to be printed
 * Return:void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
	for (i = n - i; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
		putchar(' ');
		}
		putchar(92);
		putchar('\n');
	}
	}
	else
	putchar('\n');
}
