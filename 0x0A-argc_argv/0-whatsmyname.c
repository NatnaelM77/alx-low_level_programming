#include <stdio.h>

/**
* main - print out name
* @argc: the size of argv
* @argv: is an array containing command ling arguments
* Return: 0
*/

int main(int argc __attribute__((unused)), char const *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
