#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse a string
 * @s: print reverse string
*/
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
