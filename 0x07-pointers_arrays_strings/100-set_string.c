#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to a pointer to a char (i.e., a pointer to a string)
 * @to: a pointer to a char (i.e., a string)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
