#include <stdio.h>

/**
 * main - returns 0
 *
 * Description - main returns 0
 * putchar - Prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
	for (j = i + 1 ; j < 10 ; j++)
	{
		putchar (i);
		putchar (j);
		if (i != 8 || j != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
}
putchar('\n');
return (0);
}
