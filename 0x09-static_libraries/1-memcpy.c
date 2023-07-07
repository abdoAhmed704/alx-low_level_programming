#include "main.h"

/**
 * *_memcpy - a function copies memory area
 *
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		dest[num] = src[num];
	}
	return (dest);
}
