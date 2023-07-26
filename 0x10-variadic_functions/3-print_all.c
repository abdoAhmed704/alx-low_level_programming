#include "variadic_functions.h"

/**
 * formats_ch - formats character
 * @separator: the string seprator
 * @pa: argument pointer
 */
void formats_ch(char *separator, va_list pa)
{
	printf("%s%c", separator, va_arg(pa, int));
}

/**
 * formats_i - formats integer
 * @separator: the string seprator
 * @pa: argument pointer
 */
void formats_i(char *separator, va_list pa)
{
	printf("%s%d", separator, va_arg(pa, int));
}

/**
 * formats_fl - formats float
 * @separator: the string seprator
 * @ap: argument pointer
 */
void formats_fl(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * formats_st - formats string
 * @separator: the string seprator
 * @ap: argument pointer
 */
void formats_st(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: the format string
 */
void print_all(const char * const format, ...)
{
	int k = 0, j;
	char *separator = "";
	va_list pa;
	token_t tokens[] = {
		{"c", formats_ch},
		{"i", formats_i},
		{"f", formats_fl},
		{"s", formats_st},
		{0, 0}
	};

	va_start(pa, format);
	while (format && format[k])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[k] == tokens[j].token[0])
			{
				tokens[j].f(separator, pa);
				separator = ", ";
			}
			j++;
		}
		k++;
	}
	printf("\n");
	va_end(pa);
}
