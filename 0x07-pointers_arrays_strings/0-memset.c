#include "main.h"

char *_memset(char *s, char b, unsigned int n) {
    
unsigned char *p = (unsigned char *)s;

   
for (unsigned int i = 0; i < n; i++) {
*p++ = (unsigned char)b;
}
return s;
}
