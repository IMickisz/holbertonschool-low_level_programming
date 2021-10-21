#include "mainn.h"

/**
 * _pow_recursion - function that returns value of x raised to y
 * @x: base
 * @y: power
 * Return: the value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * (_pow_recursion(x, y - 1)));
}
