#include "main.h"
#include <stdio.h>
/**
* jack_bauer - printing every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int hr, min;

	hr = 0;
	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
		printf("%d%d:%d%d", (hr / 10), (hr % 10), (min / 10), (min % 10));
				putchar('\n');
				min++;
		}
		hr++;
	}
}
