#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that adds two integers
 * @a: first integer
 * @b: second integer
 * Return: addition of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substracts two integers
 * @a: first integer
 * @b: second integer
 * Return: substraction of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiplies two integers
 * @a: first integer
 * @b: second integer
 *Return: multiplication of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides two integers
 * @a: first integer
 * @b: second integer
 * Return: division of a / b
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - function that return the module of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulo of a % b
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
