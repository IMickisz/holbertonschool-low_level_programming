#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: The number to compute
 *
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	return (n);
}
