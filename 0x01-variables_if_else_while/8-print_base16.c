#include <stdio.h>

/**
 * main -  printing all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	int w;

	for (q = 48; q < 58; q++)
		putchar(q);
	for (w = 97; w < 103; w++)
		putchar(w);
	putchar('\n');
	return (0);
}
