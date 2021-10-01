#include <stdio.h>

/**
 * main - return 0
 *
 * Description - main return 0
 * putchar - Print the alphabet in lowercase except q an e
 * Return: 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar ('\n');
	return (0);
}
