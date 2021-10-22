#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", argv[0]);
	return (0);
}
