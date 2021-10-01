#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	char i;

	i = 48;

	while (i < 57)
	{
		_putchar(i);
		i++;
	}
	_putchar("\n");
}
