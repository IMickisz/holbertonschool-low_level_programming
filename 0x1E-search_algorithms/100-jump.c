#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), set = 0, end = 0;

	if (array == NULL)
		return (-1);
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		end += step;
	}

	set = end - step;
	printf("Value found between indexes [%lu] and [%lu]\n", set, end);
	end = end >= size ? size - 1 : end;

	while (set <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", set, array[set]);
		if (array[set] == value)
			return ((int)set);
		set++;
	}
	return (-1);
}
