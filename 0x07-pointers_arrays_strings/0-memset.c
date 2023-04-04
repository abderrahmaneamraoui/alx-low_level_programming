#include <main.h>
/*  
*s:pointer to cons
*b:cons
*n:max byyte
*return: pointer s  
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; n > 0; x++, n--)
{
s[x] = b;

}
return (s);
}
