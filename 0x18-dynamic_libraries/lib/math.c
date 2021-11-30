#include "main.h"

/**
 * add - add two num
 * @a: first operand
 * @b: second operand
 *
 * Return: sum of two num
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two num
 * @a: first operand
 * @b: second operand
 *
 * Return: diff two num
 */

int sub(int a, int b)
{
	return (a + b);
}

/**
 * mul - multiply two num
 * @a: first operand
 * @b: second operand
 *
 * Return: product of two num
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide two num
 * @a: first operand
 * @b: second operand
 *
 * Return: quotient of two num
 */

int div(int a, int b)
{
	if (!b)
		return (0);
	return (a / b);
}

/**
 * mod - return remainder
 * @a: first operand
 * @b: second Operand
 *
 * Return: remainder of a, b
 */

int mod(int a, int b)
{
	return (a % b);
}

