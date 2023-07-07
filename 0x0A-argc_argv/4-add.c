#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - print adding positive numbers.
 *
 * @argc: The size of the argv array
 * @argv: An array of size argc.
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	int inum, jnum, sum = 0;

	for (inum = 1; inum < argc; inum++)
	{
		for (jnum = 0; argv[inum][jnum] != '\0'; jnum++)
		{
			if (!isdigit(argv[inum][jnum]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[inum]);
	}
	printf("%d\n", sum);
	return (0);
}
