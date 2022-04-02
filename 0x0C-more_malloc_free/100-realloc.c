#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		size_t i;
		void *new = malloc(new_size);
		if (!new)
			return (NULL);

		for (i = 0; i < old_size; i++)
		{
			new[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (new);
	}
}
