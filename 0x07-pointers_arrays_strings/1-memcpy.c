#include "main.h"

/**
 * _memcpy - fnct to copy memory content src to a char dest
 * @dest: destination
 * @src: src
 * @n: content in byte to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		*(dest++) = *(src++);

	return (dest);
}
