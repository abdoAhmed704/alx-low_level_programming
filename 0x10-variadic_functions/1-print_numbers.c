#include "variadic_functions.h"



/**
 * print_numbers - prints numbers with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
		printf(" ");
	}
	printf("\n");
	va_end(args);
}
