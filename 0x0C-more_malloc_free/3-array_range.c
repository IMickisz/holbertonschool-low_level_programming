#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an  array that contain all the values from min
 * (included) to max (included), ordered from min to max
 * If min > max, return NULL
 * If malloc fails, return NULL
 * @min: min value to store on memory
 * @max: min value to store on memory
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *s, len, i;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	s = malloc(sizeof(int) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
