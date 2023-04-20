#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Function prints a given name
 * @name: Input string of name.
 * @f: Function that prints the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
