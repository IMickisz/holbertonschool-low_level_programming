#include "main.h"

/**
 * isprime - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: On success 1. On error -1.
 */

int isprime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (isprime(a, b + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number
 * Return: On success 1. On error -1.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (isprime(n, 2));
}
