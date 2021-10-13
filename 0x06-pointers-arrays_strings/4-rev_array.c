#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to a string
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int ch;

	for (i = 0; i < n / 2; i++)
	{
		ch = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = ch;
	}
}
