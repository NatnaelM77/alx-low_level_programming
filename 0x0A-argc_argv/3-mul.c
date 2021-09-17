#include "stdio.h"
#include "stdlib.h"

/**
* main - print out multiple of two numbers
* @argc: the size of argv
* @argv: is an array containing command line arguments
* Return: 0
*/

int main(int argc, char const *argv[])
{
	int i, m = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; ++i)
		{
		m *= atoi(argv[i]);
		}
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
