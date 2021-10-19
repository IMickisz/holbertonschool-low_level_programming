#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: character array to fill
 * @b: constant byte to fill with
 * @n: how many bytes to fill
 * Return: the pointer to the char array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
