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
	unsigned int sum = 0, len, i, binary, rest, base = 1;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (i = 0; len > i; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	binary = _atoi(b);
	while (binary > 0)
	{
		rest = binary % 10;
		sum += rest * base;
		binary /= 10;
		base *= 2;
	}
	return (sum);
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

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Description: Number in the string can be preceded by an infinite
 * number of characters.
 * You need to take into account all -/+ signs before the number.
 * If there are no numbers in the string, return 0.
 * No need to check for overflow.
 * Not allowed to hard-code special values.
 * Return: first integer found in string
 */

int _atoi(const char *s)
{
	int i;
	int h = 0, p = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;
		if (s[i] > 47 && s[i] < 58)
		{
			if (h < 0)
				h = (h * 10) - (s[i] - '0');
			else
				h = (s[i] - '0') * -1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		h *= -1;
	return (h);
}
