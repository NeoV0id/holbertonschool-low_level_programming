#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print name
 * @name: name to print (as pointer)
 * @f: function to execute to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
