#include "main.h"
#include <stdio.h>
/**
 * *_strstr - a function that locates a substring.
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */


char *_strstr(char *haystack, char *needle)
{
int im, jm;

for (im = 0; haystack[im] > '\0'; im++)
{
	for (jm = im; haystack[jm] > '\0' && needle[jm - im] > '\0'; jm++)
	{
		if (haystack[jm] != needle[jm - im])
		{
			break;
		}
	}
	if (needle[jm - im] == '\0')
	{
		return (haystack + im);
	}
}
return (0);
}
