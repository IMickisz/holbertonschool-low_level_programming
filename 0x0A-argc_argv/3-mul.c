#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: On success 0, else 1
 */

int main(int argc, char *argv[])
{
	int sol;

	if (argc == 3)
	{
		sol = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sol);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
