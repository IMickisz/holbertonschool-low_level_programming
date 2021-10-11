#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @str: pointer to string
 */

void print_rev(char *s)
{
	int c;
	int len = _strlen(s);

	for (c = len - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
