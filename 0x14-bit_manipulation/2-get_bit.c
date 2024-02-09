#include "main.h"
/**
 * get_bit - function that gives the value of the bit localised by an index
 * @n: first parameter.
 * @index: the index of the value test
 * Return: return (-1) in error, or the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int flag = 0;
if (index > 32)
	return (-1);
flag = (n >> index) & 1;
return (flag);
}
