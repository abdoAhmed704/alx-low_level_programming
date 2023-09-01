#include <stdio.h>

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
	(void)argv;

	for(Index_argc = 0; Index_argc < argc ; Index_argc++)
	{
		printf("%s\n", argv[Index_argc]);
	}
	return 0;
}
