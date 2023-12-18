#include <stdio.h>
#include "main.h"
/**
 *binary_to_uint - a function that converts a binary number to an integer.
 *
 *@b: pointer to string.
 *Return: 0 or dec.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j, dec = 0;


	for (j = 0; b[j] != '\0'; j++)
		;
	if (b == NULL)
	{
		return (0);
	}
	else
	{
		while (j--)
		{
			if ((b[j] != '1') && (b[j] != '0'))
			{
				return (0);
			}
			if (b[j] == '1')
			{
				dec += pwer(i);
			}
			i++;
		}
	}
	return (dec);
}
