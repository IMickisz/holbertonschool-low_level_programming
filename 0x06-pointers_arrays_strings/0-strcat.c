#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
