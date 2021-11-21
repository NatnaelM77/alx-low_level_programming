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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t i, j = 0, len;

	if (!s2)
		s2 = "";

	if (n >= _strlen(s2))
		len = _strlen(s2);
	else
		len = _strlen(s1) + n + 1;

	ptr = (char *) malloc(len);

	if (!ptr)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (i < _strlen(s1))
			ptr[i] = s1[i];
		else
			ptr[i] = s2[j++];
	}
	ptr[i] = '\0';

	return (ptr);
}
