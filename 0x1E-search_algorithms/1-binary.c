#include "search_algos.h"

/**
 * print_array - Prints an array of integers.
 * @array: pointer to the array
 * @low: index to the beginning of the array
 * @high: index to the end of the array
 * Return: Nothing
 */

void print_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * binary search algorithm
 * @array: pointer to the first element of the array (in ascending order)
 * @size: number of elements in array
 * @value: value to search for (appear only once)
 * Return: the first index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, hightest = array[size - 1], lowest = array[0];

	if (array == NULL)
		return (-1);
	while (lowest <= hightest)
	{
		print_array(array, lowest, hightest);
		mid = lowest + (hightest - lowest) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			lowest = mid + 1;
		else
			hightest = mid - 1;
	}
	return (-1);
}
