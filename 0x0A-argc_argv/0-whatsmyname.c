#include <stdio.h>
/**
 * main - prints its name
 *
 * @argc: The size of the argv array
 * @argv: An array of size argc
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
