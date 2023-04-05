#include "main.h"
/*
 *_put_recursion print a string ,followed by new line
 *@s:the stringReturn :void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(str);
}
