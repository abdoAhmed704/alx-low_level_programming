#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
