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
	char *start = haystack;
	char *_needle = needle;
	int found =  0;

	if (!*_needle)
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			found = 1;
			start = haystack;
			while (*_needle)
			{
				if (*haystack != *_needle)
				{
					found = 0;
					_needle = needle;
					break;
				}

				haystack++;
				_needle++;
			}
		}

		if (found)
		{
			break;
		}

		haystack++;
	}
	if (found)
	{
		return (start);
	}

	return (NULL);
}
