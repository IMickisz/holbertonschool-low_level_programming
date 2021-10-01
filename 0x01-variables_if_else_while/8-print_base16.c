#include <stdio.h>

/**
 * main - return 0
 *
 * Description - main return 0
 * putchar - Print all numbers of base 16 in lowercase
 * Return: 0
*/

int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
