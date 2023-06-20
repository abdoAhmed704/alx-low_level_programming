#include <stdio.h>

/**
 * main - printing the lowercase alphabet in reverse,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
