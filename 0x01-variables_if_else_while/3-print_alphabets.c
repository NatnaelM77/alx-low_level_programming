#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
int alphabet = 97;
while (alphabet < 123)
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
