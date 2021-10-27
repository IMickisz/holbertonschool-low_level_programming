#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count argument
 * @av: double pinter to argument
 * Return: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
		size++;
	}
	size++;
	s = malloc(size);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
