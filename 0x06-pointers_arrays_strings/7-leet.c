#include "main.h"

/**
 * leet - encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: string
 * Return: encoded string
 */

char *leet(char *s)
{
	int a, j;
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't','T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == 'a' || s[a] == 'A' || s[a] == 'e' ||
		    s[a] == 'E' || s[a] == 'o' || s[a] == 'O' ||
		    s[a] == 't' || s[a] == 'T' || s[a] == 'l' ||
		    s[a] == 'L')
		{
			for (j = 0; s[a] != let[j]; j++)
			{}
			s[a] = num[j];
		}
	}
	return (s);
}
