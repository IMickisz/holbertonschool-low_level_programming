#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet x10, in lowercase
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
