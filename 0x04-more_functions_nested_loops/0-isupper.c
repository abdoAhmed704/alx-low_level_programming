#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: is a parameter
 *
 * Return: 1 if upper and 0 if lower
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);

}
