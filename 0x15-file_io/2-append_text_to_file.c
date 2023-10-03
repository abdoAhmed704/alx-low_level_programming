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
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: a file name
 * @text_content : the data of the file
 *
 * Return: 1 on success, -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_open;
	ssize_t printed = 0, len = git_len(text_content);

	if (!filename)
		return (-1);

	file_open = open(filename, O_RDWR, 0600);
	if (file_open == -1)
		return (-1);
	if (len)
		printed = write(file_open, text_content, len);
	close(file_open);
	return (printed == len ? 1 : -1);

}

