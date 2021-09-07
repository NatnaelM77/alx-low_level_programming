#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse a string
 * @s: print reverse string
*/
void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
