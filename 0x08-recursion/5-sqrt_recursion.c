#include <stdio.h>
#include "main.h"

int help_sqrt(int n, int value);
/**
 *_sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 *
 * Return: int.
*/
int _sqrt_recursion(int n)
{
	return (help_sqrt(n, 1));
}
/**
 *help_sqrt - returns the natural square root of a number.
 * @n: integer
 * @value: integer
 *
 * Return: int.
*/
int help_sqrt(int n, int value)
{
	if ((value * value) == n)
		return (value);
	else if ((value * value) < n)
		return (help_sqrt(n, value + 1));
	else
		return (-1);
}
