#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print out name
 * @name: name to be printed 
 * @f: function to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if(!f)
		(*f)(name);
}