#include <stdio.h>

/**
 * main - return 0
 *
 * Description - main return 0
 * putchar - Print all single digit numbers of base 10
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
