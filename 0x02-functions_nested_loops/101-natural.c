#include "main.h"

/**
 * print_multiples - print multiples of 3
 * and 5 less than 1024
 *
 * @n: max number
 */

void print_multiples(int n)
{
	int i = 1, total = 0;

	for (; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	printf("%d ", total);
}

/**
 * main - Entry Point
 *
 * Return: 0 on success
 */

int main(void)
{
	print_multiples(1024);

	return (0);
}