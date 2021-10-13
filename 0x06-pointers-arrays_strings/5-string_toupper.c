#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: string in uppercase
 */

char *string_toupper(char *str)
{
	char a;

	for (a = 0; a != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
	}
	return (str)
}
