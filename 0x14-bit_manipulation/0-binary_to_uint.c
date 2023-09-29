#include "main.h"

/**
 * binary_to_uint - converts a binary number string to unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int form of b
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int i = 0;
    while (*b)
    {
        i = (i << 1) + (*b == '1');
        b++;
    }
    return i;
}
