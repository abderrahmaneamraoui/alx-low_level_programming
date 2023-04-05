#include "main.h"

/**
 * _print_rev_recursion - function declaration
 * @s: the string
 */

void _print_rev_recursion(char *s);

/**
 *_print_rev_recursion 
 * @s: the string to recurse
 * Description: recurses through a string s and prints it in reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
