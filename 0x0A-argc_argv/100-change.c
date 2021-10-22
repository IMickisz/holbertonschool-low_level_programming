#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: On success 0, else 1
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}
	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - get change
 * @cents: amount of coins from main function
 * Return: change
 */

int change(int cents)
{
	int c1 = 1, c2 = 2, c3 = 5, c4 = 10, c5 = 25;
	int coins;

	while (cents > 0)
	{
		for (c5 = 25; cents >= c5; coins++)
			cents -= c5;
		for (c4 = 10; cents >= c4; coins++)
			cents -= c4;
		for (c3 = 5; cents >= c3; coins++)
			cents -= c3;
		for (c2 = 2; cents >= c2; coins++)
			cents -= c2;
		for (c1 = 1; cents >= c1; coins++)
			cents -= c1;
	}
	return (coins);
}
