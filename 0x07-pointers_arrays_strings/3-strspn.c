#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: character array to check
 * @accept: character array to check for
 * Return: the number of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum;
	int i, j;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				sum++;
			else
				break;
		}
	}
	return (sum);
}
