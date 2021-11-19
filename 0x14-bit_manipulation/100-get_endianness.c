#include "main.h"

/**
 * get_endianness - sets the value of a bit to 0 at a given index
 * Return: 0 if big endian, 1 if little endian
 */


int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
