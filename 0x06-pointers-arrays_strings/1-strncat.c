#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: byte
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
