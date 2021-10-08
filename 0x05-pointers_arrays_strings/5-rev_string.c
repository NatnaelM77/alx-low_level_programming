#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string s
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i = 0;
	char tmp;

	while (i < len / 2)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = tmp;
		i++;
	}

}
