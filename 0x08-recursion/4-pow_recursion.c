#include "main.h"

/*
 * power - return power using recursion
 * @base: base number
 * @a: power number
 * Return: return power
 */


int _pow_recursion(int x, int y)
{
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return -1;
}
