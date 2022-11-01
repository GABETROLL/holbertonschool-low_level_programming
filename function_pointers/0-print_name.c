#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Uses function f to print name.
 * @name: name
 * @f: function that prints name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}

