#include "main.h"

/**
 * print_line - function that draws a straight line.
 * @n: number of time '_' is printed
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			break;
		}
		else
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
