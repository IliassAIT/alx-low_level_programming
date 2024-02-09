#include "main.h"
/**
 * flip_bits - funtion that tell how many bits should be changed
 *	       to match another num
 * @n: first parameter.
 * @m: second parameter.
 * Return: return number of bits to be flipped
 */
int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int binflip;
int count = 0;
binflip = n ^ m;
while (binflip)
{
if ((binflip & 1) == 1)
	count++;
binflip >>= 1;
}
return (count);
}
