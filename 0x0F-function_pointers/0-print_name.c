#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a given function
 * @name: the name to print
 * @f: a pointer to a function that takes a char pointer as an argument and returns void
 *
 * This function takes a name as a string and a function pointer as parameters.
 * It calls the function pointed to by the function pointer and passes the name as an argument to it.
 */

void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
    {
        return;
    }
    else
    {
        f(name);
    }
}
