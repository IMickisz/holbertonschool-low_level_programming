#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: starting number
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%i, ", n);
				n--;
			}
			else
			{
				printf("%i", n);
				printf("\n");
				break;
			}
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%i, ", n);
				n++;
			}
			else
			{
				printf("%i", n);
				printf("\n");
				break;
			}
		}
	}
	else
	{
		printf("%i", n);
		printf("\n");
	}
}
