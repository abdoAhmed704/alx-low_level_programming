#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @k: int
 * @n: int
 * Return: 0 or 1
 */

int check_prime(int n, int k);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check if n is a prime number
 * @n: int
 * @k: int
 * Return: int
 */

int check_prime(int n, int k)
{

	if (k >= n && n > 1)
		return (1);
	else if (n % k == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, k + 1));
}
