#include "main.h"

/**
 * more_numbers - function that print numbers from 0 to 14, ten time.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j = 0;

	while (j <= 9)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		j++;
	}
}
