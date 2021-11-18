#include "main.h"

/**
 * get_bit - prints the binary representation of a number
 * @n: decimal to convert
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of a bit at a given index (or -1 if error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
        int num = n;
	unsigned int len = 0;

	for (len = 0; n; len++) /*count the lenght of binary number*/
		n >>= 1;
	if (index >= len)
		return (-1);
	else
		num = ((num >> index) & 1);
	return (num);
}
