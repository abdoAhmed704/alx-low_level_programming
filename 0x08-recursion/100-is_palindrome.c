#include "main.h"

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: a string
* Return: Flag
**/
int is_palindrome(char *s)
{
	unsigned int length = 0;
	unsigned int indix = 0;
	unsigned int Flag = 0;

	/**git the length**/
	while (s[length])
	{
		length++;
	}
	/**check**/
	for (indix = 0; indix < (length / 2); indix++)
	{
		if (s[indix] == s[(length - indix - 1)])
			Flag = 1;
		else
		{
			Flag = 0;
			break;
		}
	}
	return (Flag);
}
