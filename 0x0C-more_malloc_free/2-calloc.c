#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array of
 * nmemb elements of size bytes each and returns a pointer to the
 * allocated memory
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * @nmemb: number of element of the array
 * @size: number of bytes of each element
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	_memset(ar, 0, size * nmemb);
	return (ar);
}

/**
 * _memset - fills memory with a constant byte.
 * @s: address begin to fill
 * @b: value to set on memory
 * @n: numbers of bytes to pointed by s
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		*(s + count) = b;
	return (s);
}
