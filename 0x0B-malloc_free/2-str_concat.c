#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * git_size - git the length
 * @s: a string
 * Return: int
 */
int git_size(char *s)
{
	int n = 0;

	for (; s[n] != '\0'; n++)
	;
	return (n);
}
/**
 * *str_concat - a function that concatenates two strings.
 * @s1: a string 1
 * @s2: a string 2
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, i;
	char *m;

	if (s2 == NULL)
		s2 = "\0";
	if (s1 == NULL)
		s1 = "\0";
	n1 = git_size(s1);
	n2 = git_size(s2);
	m = malloc((n1 + n2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= (n1 + n2); i++)
	{
		if (i < n1)
		{
			m[i] = s1[i];
		}
		else
			m[i] = s2[i - n1];
	}
	m[i] = '\0';
	return (m);
}
