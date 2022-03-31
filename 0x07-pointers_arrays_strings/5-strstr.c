#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	size_t i, j;

	for (i = 0; i < strlen(haystack); i++)
	{
		if (haystack[i] == needle[0])
		{
			size_t len = (strlen(haystack) - i) + 1;
			char *str = malloc(len);

			for (j = 0; j < len; j++)
			{
				*(str + j) = *(haystack + i++);
			}
			*(str + j) = '\0';

			return (str);
		}
	}
	return (NULL);
}
