#include "main.h"

/*
 * power - return power using recursion
 * @base: base number
 * @a: power number
 * Return: 
 */


int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else if (a < 0)
        return -1;
}
