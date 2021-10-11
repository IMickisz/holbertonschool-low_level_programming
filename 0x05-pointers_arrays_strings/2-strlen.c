#include "main.h"

/**
 * _strlen - swaps the values of two integers.
 * @s: pointer to int b
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
