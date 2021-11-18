#include "main.h"

/**
 * get_bit - prints the binary representation of a number
 * @n: decimal to convert
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of a bit at a given index (or -1 if error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)    /*size of unsigned long int*/
		return (-1);
	else
		return ((n >> index) & 1);
}
