#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to buffer
 * @src: pointer to string
 * @dest: pointer to buffer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);
	int c;

	for (c = 0; c <= len; c++)
		dest[c] = src[c];
	return (dest);
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
