#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is
 * one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len, power = 1;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		dec +=  (b[len] - '0') * power;
		power *= 2;
	}
	return (dec);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to int b
 * Return: The length of the string c
 */

int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
