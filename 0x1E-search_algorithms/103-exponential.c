#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array using
 * exponential search algorithm
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index of where value is located or -1 if it fails
 */

int exponential_search(int *array, size_t size, int value)
{
	int step = 1;
	int min, mid, low, high;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (array[step] <= value && step < size)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		min = step;
		step *= 2;
		if (step > size - 1)
		{
			step -= 1;
			break;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", min, step);
	low = min;
	high = step;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		print_array(array, low, high);
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
 * @array: array of int
 * @min: min element of array
 * @max: max element of array
 *
 */

void print_array(int *array, int min, int max)
{
	printf("Searching in array: ");
	for (; min < max; min++)
	{
		printf("%d, ", array[min]);
	}
	printf("%d\n", array[min]);
}
