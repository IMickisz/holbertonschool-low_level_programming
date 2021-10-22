#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argv++)
	{
		printf("%d\n", argc - 1);
		break;
	}
	return (0);
}
