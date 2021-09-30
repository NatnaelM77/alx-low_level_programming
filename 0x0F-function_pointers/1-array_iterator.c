#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: array to be printed
 * @size: size of an array
 * @action: callback function to print elem of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{

		for (i = 0; i < size; ++i)
			(*action)(array[i]);
	}
}
