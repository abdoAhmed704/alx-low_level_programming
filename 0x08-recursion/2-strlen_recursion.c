#include "main.h"

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
	_strlen_recursion(s + 1);
}
