#include "3-calc.h"

/**
 * main - check the code
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int), i, j;

	if (argc != 4)
		printf("Error\n"), exit(98);
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!j && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(i, j));
	return (0);
}
