#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: name of the file
 * @letters: number of bytes
 *
 * Return: number bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptrFile;
	char Nums[1024];
	ssize_t bytes;

	if (filename == NULL || letters == 0)
		return (0);
	ptrFile = open(filename, O_RDONLY);
	if (ptrFile == -1)
		return (0);
	bytes = read(ptrFile, Nums, letters);
	bytes = write(STDOUT_FILENO, Nums, bytes);
	close(ptrFile);
	return (bytes);
}
