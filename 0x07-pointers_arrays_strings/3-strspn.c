#include "main.h"

/**
 * _strspn -  a function that gets the length of
 * a prefix substring..
 *
 * @s: string.
 * @accept: bytes.
 *
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int im, jm;

	for (im = 0; s[im] != '\0'; im++)
	{
		for (jm = 0; accept[jm] != s[im]; jm++)
		{
			if (accept[jm] == '\0')
				return (im);
		}
	}
	return (im);
}
