#include "main.h"
/**
 * print_square - draws a square line on the terminal.
 * @size : number of to be printed
 * Return:void
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
