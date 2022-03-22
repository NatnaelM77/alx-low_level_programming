#include <stdio.h>

/**
 * main - prints out all the numbers between 00 and 99
 * with no two digits being the same
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
					printf("%d%d%d", i, j, k);
				}
				else
				{
					printf("%d%d%d,", i, j, k);
				}
			}
		}
	}
}
