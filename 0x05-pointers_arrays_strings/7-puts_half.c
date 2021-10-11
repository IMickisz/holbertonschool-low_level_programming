#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int c;
	int len = _strlen(str);

	if (len % 2 == 0)
	{
		for (c = len / 2; c < len; c++)
			_putchar(str[c]);
		_putchar('\n');
	}
	else
	{
		for (c = (len - 1) / 2; c < len; c++)
			_putchar(str[c]);
		_putchar('\n');
	}
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
