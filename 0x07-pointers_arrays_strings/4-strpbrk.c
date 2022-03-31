#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: string
 *
 * Return: a pointer to char
 */

char *_strpbrk(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				size_t len = (strlen(s) - i) + 1;
				char *str = malloc(len);

				for (j = 0; j < len; j++)
				{
					*(str + j) = *(s + i++);
				}
				*(str + j) = '\0';

				return (str);
			}
		}
	}
	return (NULL);
}