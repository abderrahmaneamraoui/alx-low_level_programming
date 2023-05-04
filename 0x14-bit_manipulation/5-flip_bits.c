#include "main.h"
/**
* flip_bits-returns thenmberofbitsyouwouldneedtofliptogetfromonenumbertoanother
* @n: first number
* @m: second number
*
* Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m; /*XORthetwo numbers to get the bit differences*/
unsigned int count = 0;
while (xor) /* Loop through the XORed number and count the numberofsetbits */
{
count += xor & 1;
xor >>= 1; /* Shift the bits to the right by 1 to check the next bit */
}

return (count);
}
