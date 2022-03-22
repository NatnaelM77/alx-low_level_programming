#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (i == 7)
				{
					printf("%d%d%d\n", i, j, k);
				}
				else
				{
					printf("%d%d%d, ", i, j, k);
				}
			}
		}
	}

	return (0);
}
