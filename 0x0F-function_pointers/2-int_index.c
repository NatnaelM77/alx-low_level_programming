#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - searches for an integer
 * @array: array
 * @size: size of an array
 * @action: callback function to check array elem
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;
	
	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}