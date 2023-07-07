#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;

	int i;

	/* Get the length of the string */
	while (*(str + count) != '\0')
	count++;

	/* Print every other character of the string */
	for (i = 0; i < count; i++)
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
}
