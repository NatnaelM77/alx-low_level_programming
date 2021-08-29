#include <stdio.h>

/**
 * main - prints out the alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int alphabet = 123;

	while (alphabet <= 65)
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
