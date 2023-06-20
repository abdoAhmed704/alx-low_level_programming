#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign a random number to the
 * variable n each time it is executed.
 *
 * Return: Always 0 (Success)
 */
int  main(void)
{
	int k;

	srand(time(0));
	k = rand() - RAND_MAX / 2;
	if (k == 0)
	printf("%d is zero\n", k);
	if (k > 0)
	printf("%d is positive\n", k);
	if (k < 0)
	printf("%d is negative\n", k);
	return (0);
}
