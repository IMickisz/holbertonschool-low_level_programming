#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: space to allocate
 * Return: Returns a pointer to the allocated memory, if malloc fails,
 * the malloc_checked function should cause normal process termination
 * with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
