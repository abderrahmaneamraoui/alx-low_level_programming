#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n'); /* base case: end of string */
		return;
	}

	_putchar(*s); /* print current character */
	_puts_recursion(s + 1); /* recursively call function with next character */
}
