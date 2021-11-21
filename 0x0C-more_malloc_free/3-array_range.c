#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first value of the array
 * @max: last value of ther array
 *
 * Return: pointer to an array
 */

int *array_range(int min, int max)
{
	int* ptr, elem, i;

	if (min > max)
		return (NULL);

	elem = max - min + 1;
	ptr = (int *) malloc(elem * sizeof(int));

	if (!ptr)
		return (NULL);

	for (i = 0; i < elem; i++) {
		*(ptr + i) = min + i;
	}

	return (ptr);
}
