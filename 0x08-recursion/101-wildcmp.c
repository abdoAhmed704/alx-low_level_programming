#include "main.h"

/**
 * past_star - past asterisk
 * @s2: string
 *
 * Return: the pointer past star
 */
char *past_star(char *s2)
{
	if (*s2 == '*')
		return (past_star(s2 + 1));
	else
		return (s2);
}

/**
 * ception - help function
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if identical, 0 if false
 */
int ception(char *s1, char *s2)
{
	int rettt = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		rettt += wildcmp(s1 + 1, s2 + 1);
	rettt += ception(s1 + 1, s2);
	return (rettt);
}

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if identical, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	int rettt = 0;

	if (!*s1 && *s2 == '*' && !*past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			rettt += wildcmp(s1 + 1, s2 + 1);
		rettt += ception(s1, s2);
		return (!!rettt);
	}
	return (0);
}
