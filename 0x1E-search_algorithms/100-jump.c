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

int jump_search(int *array, size_t size, int value) {
	size_t i = 0;
	size_t min = 0;
	size_t block_size = (size_t) sqrt(size);
	size_t max = block_size;

	if (!array)
		return (-1);

	while (*(array + max) > value || max <= size) {
		printf("Value checked array[%zu] = [%zu]\n", min, min);
		if (*(array + max) < value)
		{
			min = max;
			max = max + block_size;
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes[%zu] = [%zu]\n", min, max);

	for (; min <= max; min++) {
		printf("Value checked array[%zu] = [%d]\n", min, *(array +
			min));
		if (value == *(array + min)) {
			return (min);
		}
	}

	return (-1);
}
