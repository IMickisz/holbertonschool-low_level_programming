#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int j, k, i;

	if (size > 0)
	{
		for (j = 0 ; j < size ; j++)
		{
			for (i = size - 1 ; i > j ; i--)
				_putchar(' ');

			for (k = 0  ; k <= j ; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
