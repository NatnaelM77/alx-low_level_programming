#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index of where value is located or -1 if it fails
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int min = 0;
	int max = jump;
	int i;

	if (!array || size == 0)
	{
		return (-1);
	}

	while (array[max] <= value && max < size)
	{
		if (array[max] == value)
			break;

		min = max;
		max += jump;

		if (max > size - 1)
			break;
	}

	for (i = 0; i <= min; i += jump)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}

	printf("Value found between indexes [%d] and [%d]\n", min, max);

	while (min <= max && min < size)
	{
		printf("Value checked array[%d] = [%d]\n", min, array[min]);

		if (value == array[min])
			return (min);
		min += 1;
	}

	return (-1);
}
