#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to int a
 * @b: pointer to int b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
