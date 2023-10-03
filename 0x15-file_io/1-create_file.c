#include "main.h"

/**
 * git_len - get length
 *
 * @n: a string
 *
 * Return: the number of string
 *
 **/
int git_len(char *n)
{
	int len = 0;

	if (n == NULL)
		return (0);

	while (n[len])
		len++;
	return (len);
}

/**
 * create_file - creating a file
 *
 * @filename: a file name
 * @text_content : the data of the file
 *
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int fptr;
	ssize_t printed = 0;

	if (!filename)
		return (-1);

	fptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fptr == -1)
		return (-1);
	if (git_len(text_content))
		printed = write(fptr, text_content, git_len(text_content));

	close(fptr);
	return (printed == git_len(text_content) ? 1 : -1);
}
