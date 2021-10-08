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
	n = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;

	for (i = n; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
