#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: byte
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
