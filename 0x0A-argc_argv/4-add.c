#include <stdio.h>
#include <stdlib.h>

/**
* main - add a positive integers
* @argc: the size of argv
* @argv: array containing command line arguments
* Return: 0
*/

int main(int argc, char const *argv[])
{
	int i, total = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			total += atoi(argv[i]);
		}
		printf("%d\n", total);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
