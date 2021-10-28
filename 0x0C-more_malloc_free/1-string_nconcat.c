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
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1) + 5);
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[i + k] = s2[k];
	s[i + j] = '\0';
	return (s);
	free(s);
}
