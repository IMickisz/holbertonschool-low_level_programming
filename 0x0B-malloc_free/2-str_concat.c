#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, k, p, combolen;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; *(s1 + j) != '\0'; j++)
		len1++;
	for (k = 0; *(s2 + k) != '\0'; k++)
		len2++;
	combolen = len1 + len2;
	a = malloc((combolen + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(a + i) = *(s1 + i);
	p = 0;
	for (j = len1; j < combolen; j++)
	{
		*(a + j) = *(s2 + p);
		p++;
	}
	*(a + combolen) = '\0';
	return (a);
}
