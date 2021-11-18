#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a decimal to convert
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= 64)   /*size of unsigned long int*/
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
