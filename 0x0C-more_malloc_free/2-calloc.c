#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: no of memory blocks
 * @size: size of data type
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = '\0';

	return (ptr);
}
