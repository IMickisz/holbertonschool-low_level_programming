#include "main.h"

/**
 * _sqrt_recursion_helper - helper for finding sqrt, recursion
 * @n: number for finding sqrt
 * @i: counter
 * Return: returns array that is a pointer
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (n == 0 || n == 1)
		return (1);
	if (n == i || n < 0)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the sqrt
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
