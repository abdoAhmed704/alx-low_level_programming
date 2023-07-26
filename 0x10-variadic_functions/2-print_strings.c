#include "variadic_functions.h"


/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @separator: the string separator
 * @n: arguments
 * @...: the strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int k = n;
	char *srr;
	va_list pa;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(pa, n);
	while (k--)
		printf("%s%s", (srr = va_arg(pa, char *)) ? srr : "(nil)",
			k ? (separator ? separator : "") : "\n");
	va_end(pa);
}
