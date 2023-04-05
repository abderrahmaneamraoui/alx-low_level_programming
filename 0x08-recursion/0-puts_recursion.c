#include "main.h"
/*
 *_put_recursion print a string ,followed by new line
 *@s:pointer to char
 *@Return:nothing
*/
void _put_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
			_puts_recursion(s + 1);
	}
	else
	{
		_putchar('/n');
	}
}
