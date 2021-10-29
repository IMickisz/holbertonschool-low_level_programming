#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * The contents will be copied to the newly allocated space, in the range
 * from the start of ptr up to the minimum of the old and new sizes
 * @ptr: pointer to the memory previously allocated with a call
 * to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the newly created array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		nptr[i] = ((char *) ptr)[i];
	free(ptr);
	return (nptr);
}
