#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int a, j;
	char first[] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E',
			'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J',
			'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O',
			'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T',
			'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y',
			'z', 'Z'};
	char second[] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R',
			 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W',
			 'x', 'X', 'y', 'Y', 'z', 'Z', 'a', 'A', 'b', 'B',
			 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G',
			 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L',
			 'm', 'M'};

	for (a = 0; s[a] != '\0'; a++)
	{
		if ((s[a] >= 'a' && s[a] <= 'z') ||
		    (s[a] >= 'A' && s[a] <= 'Z'))
		{
			for (j = 0; s[a] != first[j]; j++)
			{}
			s[a] = second[j];
		}
	}
	return (s);
}
