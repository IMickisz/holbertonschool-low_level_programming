#include <stdio.h>

/**
 * main - return 0
 *
 * Description - main return 0
 * putchar - Print the lowercase alphabet in reverse
 * Return: 0
*/

int main(void)
{
	char c;

	for (c = "z"; c >= "a"; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
