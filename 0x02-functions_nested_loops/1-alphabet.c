#include "main.h"

/**
 * print_alphabet - write a function that prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
{
		_putchar(c);
		c++;
}
		_putchar('\n');
}
