#include "variadic_functions.h"


/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: the string
 *
 * @n: the number of arguments
 * @...: integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int k = n;
	va_list pa;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(pa, n);
	while (k--)
		printf("%d%s", va_arg(pa, int),
			k ? (separator ? separator : "") : "\n");
	va_end(pa);
}
