#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns
 * the sum of all its parameters
 *
 * @n: the number of arguments
 * @...: the integers
 *
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int w = 0, k = n;
	va_list pa;

	if (!n)
		return (0);
	va_start(pa, n);
	while (k--)
		w += va_arg(pa, int);
	va_end(pa);
	return (w);
}
