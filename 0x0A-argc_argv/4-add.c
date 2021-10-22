#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that add positive numbers
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: On success 0, else 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0 ; j++)
		{
			if (argv[i][j] > 47 && argv[i][j] < 58)
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
