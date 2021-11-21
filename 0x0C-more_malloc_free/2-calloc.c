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
	void *ptr;
	size_t totalmemb;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	totalmemb = nmemb * size;
	ptr = malloc(totalmemb);

	if (!ptr)
		return (NULL);

	return (ptr);
}
