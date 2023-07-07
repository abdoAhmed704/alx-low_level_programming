#include "main.h"

/**
 * _strpbrk - a func Search a string for any of a set of bytes.
 * @s: string as a pointer
 * @accept: string to match
 *
 * Return: 0  Pointer to the byte in s that if  one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int inum, jnum;
	char *p;

	inum = 0;
	while (s[inum] != '\0')
	{
		jnum = 0;
		while (accept[jnum] != '\0')
		{
			if (accept[jnum] == s[inum])
			{
				p = &s[inum];
				return (p);
			}
			jnum++;
		}
		inum++;
	}

	return (0);
}
