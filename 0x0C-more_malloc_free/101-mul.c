#include "main.h"

/**
 * main - multiply two number
 * @argc: argument length
 * @argv: argument value
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index = 1;
	unsigned long int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	while (index < argc)
	{
		if (!atoi(argv[index]))
		{
			printf("Error\n");
			exit(98);
		}

		result *= atoi(argv[index]);
		index++;
	}

	printf("%uld\n", result);

	return (0);
}
