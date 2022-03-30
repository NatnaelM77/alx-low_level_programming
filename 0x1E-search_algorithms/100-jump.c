#include "search_algos.h"

/**
 * jump_search - searches for a value in an array using
 * jump search algorithm
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index of where value is located or -1 if it fails
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int i = 0, low = 0, high = size - 1;

	if (!array)
		return (-1);

	for (; low <= high; i += step)
	{
		if (array[i] == value)
			return (value);

		if (array[i] > value)
			high = i; 
		else if (array[i] < value)
			low = i;
	}

	for (i = 0; low <= high; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, *(array + i));
		if (value == *(array + i))
		{
			return (i);
		}
	}

	return (-1);

}
