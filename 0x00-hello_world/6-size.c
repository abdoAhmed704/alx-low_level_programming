#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program that prints the size of various ty
 * pes on the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
