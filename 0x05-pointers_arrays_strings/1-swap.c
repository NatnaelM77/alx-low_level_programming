#include <stdio.h>
/**
 * swap_int - swap to numbers
 * @a: address of a variable
 * @b: address of a variable
*/
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
