#include <stdio.h>

/**
* main - print out the number of command line arguments
* @argc: the size of argv
* @argv: is an array containing command line arguments
* Return: 0
*/

int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
