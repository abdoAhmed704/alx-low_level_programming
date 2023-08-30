#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  returns the length of a string.
 *
 * @s: a string
 * Return: the length of a string
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (len);
	len++;
	return (_strlen_recursion(s + 1));
}
