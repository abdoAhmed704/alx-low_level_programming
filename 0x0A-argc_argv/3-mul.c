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
	int arg_1, arg_2;
	int MAl;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	arg_1 = atoi(argv[1]);
	arg_2 = atoi(argv[2]);

	MAl = arg_1 * arg_2;

	printf("%i\n", MAl);
	return (0);
}
