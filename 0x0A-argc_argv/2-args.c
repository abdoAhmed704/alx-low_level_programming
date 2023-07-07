#include <stdio.h>
/**
 * main - prints all arguments it receives.
 *
 * @argc: The size of the argv array
 * @argv: An array of size argc
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int num;

	for (num = 0; num < argc; num++)
		printf("%s\n", argv[num]);
	return (0);
}
