#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using
 * linear search algorithm
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index of where value is located or -1 if it fails
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = %d\n", i, *(array + i));
		if (value == *(array + i))
		{
			return (i);
		}
	}

	return (-1);
}
