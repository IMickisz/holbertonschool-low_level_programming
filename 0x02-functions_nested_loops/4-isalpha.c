#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if the character is a letter. 0 otherwise
 */

int _isalpha(int c)
{
	if ((c < 'z' && c > 'a') || (c < 'Z' && c > 'A'))
		return (1);
		else
			return (0);
}
