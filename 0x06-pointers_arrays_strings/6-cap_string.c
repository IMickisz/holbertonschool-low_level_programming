#include "main.h"
int _strlen(char *s);

/**
 * cap_string - capitalize all word of a string
 * exept space, tabulation, new line, ',', ';', '.',
 * '!', '?', '"', '(', ')', '{', and '}'
 * @str: string
 * Return: string in uppercase
 */

char *cap_string(char *str)
{
	int a, len = _strlen(str);

	for (a = 0; a < len; a++)
	{
		if (a == 0 && str[a] >= 'a' && str[a] <= 'z')
		       	str[a] = str[a] - 32;
		if (str[a - 1] == ' ' || str[a - 1] == '\t' ||
		    str[a - 1] == '\n' || str[a - 1] == ',' ||
		    str[a - 1] == ';' || str[a - 1] == '.' ||
		    str[a - 1] == '!' || str[a - 1] == '?' ||
		    str[a - 1] == '"' || str[a - 1] == '(' ||
		    str[a - 1] == ')' || str[a - 1] == '{' ||
		    str[a - 1] == '}')
		{
			if (str[a] >= 'a' && str[a] <= 'z')
				str[a] = str[a] - 32;
		}
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
