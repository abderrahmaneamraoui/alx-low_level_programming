#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name to print
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
