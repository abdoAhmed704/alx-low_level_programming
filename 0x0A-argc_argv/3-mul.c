#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: Number of Arguments
 * @argv: Elements of Arguments
 *
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int MAl;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	MAl = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", MAl);

	return (0);
}
