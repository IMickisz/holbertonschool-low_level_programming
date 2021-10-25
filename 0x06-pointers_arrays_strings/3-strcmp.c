#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: the pointer to dest
 */

int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
		;
	j += s1[i] - s2[i];
	return (j);
}
