#include "main.h"
/**
 * _abs - function that computes the absolute
 *
 * @n: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;

	putchar(x + '0');
	return (x);
}
