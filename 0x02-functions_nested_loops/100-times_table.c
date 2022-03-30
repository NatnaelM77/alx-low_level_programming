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
	int j = 0;
	int i, result;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (; j < n; j++)
			{
				result = i * j;
				print_table(result, j, n, 0);
			}
			print_table(i * j, j, n, 1);
			j = 0;
		}
	}
}

/**
 * print_table - print formated table
 *
 * @value: value to be printed
 * @iter: iteration
 * @size: size of table
 * @status: status value for newline
 */

void print_table(int value, int iter, int size, int status)
{
	char *space = "   ";

	if (iter == 0)
	{
		if (iter == size)
			printf("%d\n", value);
		else
			printf("%d,", value);
	}
	else
	{
		if (value > 9 && value < 100)
		{
			space = "  ";
		}
		else if (value > 99)
		{
			space = " ";
		}

		if (status == 1)
		{
			printf("%s%d\n", space, value);
		}
		else
		{
			printf("%s%d,", space, value);
		}
	}
}
