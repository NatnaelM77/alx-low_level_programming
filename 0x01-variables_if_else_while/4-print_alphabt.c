#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int lower = 97;

	for (lower; lower < 123; lower++)
		if (lower != 101 && lower != 113)
			putchar(lower);
	putchar('\n');
	return (0);
}
