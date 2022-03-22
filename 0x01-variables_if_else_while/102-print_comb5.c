#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (i < 9)
			{
				printf("0%d ", i);
			}
			if (j < 9)
			{
				printf("0%d,", j);
			}

			if (i == 98)
			{
				printf("%d %d\n", i, j);
			}
			else if (i > 9 && j > 9)
			{
				printf("%d %d, ", i, j);
			}
		}
	}

	return (0);
}
