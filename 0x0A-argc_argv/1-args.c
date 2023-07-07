#include <stdio.h>
/**
 * main - prints the number of arguments.
 *
 * @argc: The size of the argv array
 * @argv: An array of size argc
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
