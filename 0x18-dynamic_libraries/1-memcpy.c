#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: a pointer to the memory area where the copied bytes will be stored
 *@src: a pointer to the memory area where the bytes to be copied are located
 *@n: the number of bytes to be copied from src to dest
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
