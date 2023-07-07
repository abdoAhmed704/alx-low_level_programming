#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 *
 * @size: is the size of the triangle
 *
*/
void print_triangle(int size)
{
	int i, j, k, spc = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = spc; k > 0; k--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			spc--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
