#include <main.h>
/*
 * _memcpy a function that copies memory area
 * dest :memory where is stored
 * src:memory where is copied
 * n:number of bytes
 * Return:copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x ;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
n--;
}
return (dest);
