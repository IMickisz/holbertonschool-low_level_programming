#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal to convert
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
