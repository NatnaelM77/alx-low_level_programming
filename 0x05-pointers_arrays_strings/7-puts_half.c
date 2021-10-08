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
 * puts_half - prints half of a string
 * @str: string str
 *
 */

void puts_half(char *str)
{
	int i, n, len;

	len = _strlen(str);

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}

	if (len % 2 != 0)
	{
		n = len / 2;
	}

	for (i = n; i < len; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
