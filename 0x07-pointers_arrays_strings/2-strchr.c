#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 *
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
