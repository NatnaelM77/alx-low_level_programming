#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int lower;

	for (lower = 97; lower < 123; lower++)
		if (lower != 101 && lower != 113)
			putchar(lower);
	putchar('\n');
	return (0);
}
