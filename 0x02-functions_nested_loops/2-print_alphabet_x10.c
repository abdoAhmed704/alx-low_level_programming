#include "main.h"
/**
 * print_alphabet -  prints 10 times the alphabet.
 */
void print_alphabet(void)
{
	int line, letter;

	for (line = 0; line <= 9; line++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	}
	_putchar('\n');
}
