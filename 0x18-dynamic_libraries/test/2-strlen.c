#include "main.h"

/**
 * _strlen - return string length
 * @s: address of a variable
 * Return: string length
*/
int _strlen(char *str)
{
	int length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}
