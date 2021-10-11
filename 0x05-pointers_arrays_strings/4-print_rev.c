#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string
 */

void print_rev(char *s)
{
	int c;
	int len = _strlen(s);

	for (c = len - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
