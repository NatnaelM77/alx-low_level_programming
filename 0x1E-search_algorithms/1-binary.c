#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using
 * binary search algorithm
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index of where value is located or -1 if it fails
 */

int binary_search(int *array, size_t size, int value)
{
	int mid;
	int low = 0;
	int high = size - 1;

	if (!array || size == 0)
		return (-1);

	while (low <= high)
	{
		print_array(low, high);
		mid = low + (high - low) / 2;

		if (value == array[mid])
			return (mid);

		if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_array - print array from min to max
 *
 * @min: min element of array
 * @max: max element of array
 *
 */

void print_array(int min, int max)
{
	printf("Searching in array: ");
	for (; min < max; min++)
	{
		printf("%d, ", min);
	}
	printf("%d\n", min);
}
