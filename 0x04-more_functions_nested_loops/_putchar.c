#include <unistd.h>
#include "main.h"

/**
 *  _putchar - writes a char in c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 *         on error , -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
