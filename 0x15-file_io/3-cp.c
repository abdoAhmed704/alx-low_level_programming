#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  copies the content of a file to another file.
 *
 * @ac: the number of arguments
 * @av: the arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char first_array[READ_BUF_SIZE];
	int fd_1 = 0, fd_2 = 0;
	ssize_t b;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(av[1], O_RDONLY);
	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fd_2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((b = read(fd_1, first_array, READ_BUF_SIZE)) > 0)
		if (write(fd_2, first_array, b) != b)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	fd_1 = close(fd_1);
	fd_2 = close(fd_2);
	if (fd_1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	if (fd_2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (EXIT_SUCCESS);
}
