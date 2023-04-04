#include "main.h"
/*
 * Function: _memset
 * ------------------
 * Description: This function sets the first n bytes of the memory block pointed to by s
 *              to the value of b.
 *
 * Parameters:
 *      - s: Pointer to the memory block to be filled.
 *      - b: Value to be set in each byte of the memory block.
 *      - n: Number of bytes to be set.
 *
 * Returns:
 *      - Pointer to the filled memory block (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0 ; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
