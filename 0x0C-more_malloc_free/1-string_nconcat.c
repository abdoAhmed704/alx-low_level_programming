#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Get_length - get the length of str
 *
 * @s: a string
 *
 * Return: length
**/
int Get_length(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: a string
 * @s2: a string
 * @n: number tjat conc
 *
 * Return: a pointer to the new string
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = Get_length(s1);
	len2 = Get_length(s2);

	if (n > len2)
		n = len2;

	ptr = malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < n; i++)
		ptr[i + len1] = s2[i];

	ptr[len1 + n + 1] = '\0';

	return (ptr);
}
