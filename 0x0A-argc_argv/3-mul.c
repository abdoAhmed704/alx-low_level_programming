#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication, followed by a new line.
 *
 * @argc: The size of the argv array
 * @argv: An array of size argc
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
}
