#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - 
 * @array: array to be printed
 * @size: size of an array
 * @action: callback function to print elem of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for(int i = 0; i < size; ++i)
		(*action)(array[i]);
}