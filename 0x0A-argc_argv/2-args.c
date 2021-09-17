#include "stdio.h"

/**
* main - print out all arguments
* @argc: the size of argv
* @argv: is an array containing command line arguments
* Return: 0
*/

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
