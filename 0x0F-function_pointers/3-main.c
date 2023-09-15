#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int (*ptr_test)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (ptr_test == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ptr_test(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
