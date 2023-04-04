#include <main.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
