#include <stdio.h>
#include <string.h>
/**
 * puts2 - print other character
 * @str: string param
*/
void puts2(char *str)
{
	int len = strlen(str);
	int i = 0;

	while (i <= len)
	{
		if (i % 2 == 0)
		{
			printf("%c", *(str + i));
		}
		i++;
	}
}
