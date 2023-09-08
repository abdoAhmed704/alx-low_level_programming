#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	long len_1 = 0;
	long len_2 = 0;
	char *ptr;
	long index_1 = 0;
	long index_2 = 0;

	if (s2 == NULL)
		s2 = "\0";
	if (s1 == NULL)
		s1 = "\0";
		/** Allocate the pointer **/
	ptr = (char *)malloc((len_1 + len_2 + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (index_1 = 0; index_1 < len_1; index_1++)
	{
		ptr[index_1] = s1[index_1];
	}

	for (index_2 = 0; index_2 < len_2; index_2++)
	{
		ptr[index_1 + index_2] = s2[index_2];
	}
	ptr[index_1 + index_2] = '\0';

	return (ptr);
}
