#include "main.h"
/**
 * set_bit - function that sets an indexed bit to 1
 * @n: number to be used;
 * @index: right operand
 * Return: return (-1) if error || new int value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
	return (-1);
*n = *n | (1 << index);
return (1);
}
