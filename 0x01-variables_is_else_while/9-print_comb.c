#include <stdio.h>

/**
 * main - return 0
 *
 * Description - main return 0
 * putchar - Print all combinations of single-digit numbers
 * Return: 0
*/

int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
