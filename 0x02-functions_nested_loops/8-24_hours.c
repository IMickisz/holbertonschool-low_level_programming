#include "main.h"

/**
 * jack_bauer - writes a function that prints every minute
 */

void jack_bauer(void)
{
	char h, i;

	for (h = 0 ; h < 24 ; h++)
	{
		for (i = 0 ; i <= 59 ; i++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
