#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @n: Number of bytes.
 * @s1: a pointer to first string.
 * @s2: a pointer to 2nd string.
 *
 * Return: Pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int k, u, s1_length, s2_length;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
	;
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
	;
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];
	for (u = 0; u < n; u++)
	{
		str[k] = s2[u];
		k++;
	}
	str[k] = '\0';
	return (str);
}
