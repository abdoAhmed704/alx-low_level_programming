#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14
 *
*/
void more_numbers(void)
{
	int i, line, k;

	for (line = 1; line <= 10; line++)
	{
		for (k = 0; k <= 14; k++)
		{
			i = k;
			if (k > 9)
			{
				_putchar(1 + 48);
				i = k % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
