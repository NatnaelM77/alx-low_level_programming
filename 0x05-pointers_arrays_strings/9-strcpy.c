#include "main.h"

/**
 * _strlen - return string length
 * @s: string s
 * Return: string length
 */
int _strlen(char *s)
{
	unsigned int len;

	len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}


/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte
 * @dest: copied string
 * @src: string to be copied
 * Return: pointer to new copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);

	char* ptr = dest;

	for (i = 0; i < len; i++)
		*(dest + i) = *(src + i);
	*dest = 0;
	return (ptr);
}
