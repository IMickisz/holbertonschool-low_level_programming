#include <stdio.h>

/**
 * main - return 0
 *
 * Description - main return 0
 * putchar - Print the alphabet in lowercase
 * Return: 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
