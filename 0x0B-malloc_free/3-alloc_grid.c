#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **ar, i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == 0)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ar[j][k] = 0;
	}
	return (ar);
}
