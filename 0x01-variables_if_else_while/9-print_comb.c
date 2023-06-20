#include <stdio.h>

/**
 * main - printing all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
	putchar(k);
	if (k != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
