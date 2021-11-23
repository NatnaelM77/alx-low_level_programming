#include "main.h"

/**
 * _strlen - find the legnth of string
 * @s: string
 *
 * Return: length of s
 */

size_t _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: first n bytes of s2
 *
 * Return: a pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	size_t i, j = 0;
	char *ptr;

	if (!s1)
		dest = "";

	if (!s2)
		src = "";

	ptr = malloc(strlen(dest) + n + 1);
	if (!ptr)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		*(ptr + i) = *(s1 + i);

	j = i;

	for (i = 0; i < n; i++)
	{
		*(ptr + j) = *(s2 + i);
		j++;
	}

	*(ptr + j) = '\0';

	return (ptr);
}
