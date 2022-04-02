#include "main.h"

/**
 * _memcpy - copy memory data from src to dest
 * @dest: memory destination
 * @src: memory source
 * @n: size of new memory
 */

void _memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}

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
		else
			_memcpy(new, ptr, old_size);

		free(ptr);
		return (new);
	}
}
