#include "main.h"

/**
 * flip_bits - sets the value of a bit to 0 at a given index
 * @n: 1rst decimal to convert
 * @m: 2th decimal to convert
 * You are not allowed to use the % or / operators
 * Return: number of bits you need to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	n = n ^ m;
	for (count = 0; n > 0; count++)
		n &= (n - 1);
	return (count);
}
