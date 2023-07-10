#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i * j);
			if (j != 9)
				printf(", ");
		}
		printf("\n");
	}
	return (0);
}
