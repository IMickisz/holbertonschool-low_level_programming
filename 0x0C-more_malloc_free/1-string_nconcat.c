#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 that are after s1
 * Return: pointer to a newly allocated space in memory containing
 * s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	length = n + len1 + 1;
	s = malloc(sizeof(char *) * length);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		s[len1 + j] = s2[j];
	s[length] = '\0';
	return (s);
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: length of a string
 */

unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	return (i);
}
