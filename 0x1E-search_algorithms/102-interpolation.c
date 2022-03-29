#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array using 
 * interpolation search algorithm
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index of where value is located or -1 if it fails
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high = size - 1;
	int low = 0;
	int probe;

	if (!array)
		return (-1);

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		probe = low + (high - low) * (value - array[low]) / 
		(array[high] - array[low]);
		
		printf("Value checked array[%d] = [%d]\n", low, value);

		if (value == array[probe])
			return (probe);

		else if (value < array[probe])
			low = probe + 1;
		else
			high = probe - 1;
	}
	return (-1);
}