#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: byte
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		if (i < n)
			dest[i + j] = src[j];
		else
			dest[i + j] = '\0';
	return (dest);
}
