#include "main.h"

/**
 * _strlen - return string length
 * @s: string s
 * Return: string length
 */

size_t _strlen(char *s)
{
	size_t len;

	len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
