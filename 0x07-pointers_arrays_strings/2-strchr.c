#include "main.h"

/**
 * *_strchr - a function fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int inum;

	for (inum = 0; s[inum] >= '\0'  ; inum++)
	{
		if (s[inum] == c)
		{
			return (s + inum);
		}
	}

	return ('\0');
}
