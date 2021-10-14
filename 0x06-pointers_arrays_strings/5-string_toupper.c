#include "main.h"
int _strlen(char *s);

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: string in uppercase
 */

char *string_toupper(char *str)
{
	int a, len = _strlen(str);

	for (a = 0; a < len; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
	}
	return (str);
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
