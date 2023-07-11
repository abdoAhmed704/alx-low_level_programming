#include "main.h"
#include <stdlib.h>
/**
 **_strdup - a function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: a string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int k, sizze;
	char *mallok;

	if (str == 0)
		return (0);
	for (sizze = 0; str[sizze]; sizze++)
	;
	mallok = malloc(sizze * sizeof(char) + 1);
	if (mallok == 0)
		return (0);
	for (k = 0; k < sizze; k++)
		mallok[k] = str[k];
	return (mallok);
}
