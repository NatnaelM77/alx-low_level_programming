#include "main.h"

/**
 * print_times_table - prints the n times table,
 * starting with 0.
 *
 * @n: number
 *
 */

void print_times_table(int n)
{
	int i;
	int j = 0;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (;j < n; j++)
			{
				printf("%d,   ", i * j);
			}
			printf("%d\n", i * j);
			j = 0;
		}
	}
}
