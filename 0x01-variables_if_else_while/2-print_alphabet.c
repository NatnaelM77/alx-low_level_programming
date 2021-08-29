#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int alphabet;
	for (alphabet = 97; alphabet < 123; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
