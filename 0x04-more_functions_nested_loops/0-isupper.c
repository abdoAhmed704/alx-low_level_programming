#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 *@c: string
 * Return: 1 if  upper.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
