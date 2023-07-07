#include <stdio.h>
/**
 * main - the starting point.
 *
 * Return: always 0
*/

int main(void)
{
	long int i, n = 612852475143;

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	if (n != 1)
		printf("%ld\n", n);
	return (0);
}
