#include "main.h"
/**
 * clear_bit - function that switch a bit to 0.
 * @n: first parameter
 * @index: the bit index
 * Return: return (1) success
 *	   return (-1) fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index <= 64)
{
*n = (*n) & ~(1 << index);
return (1);
}
else
	return (-1);
}
