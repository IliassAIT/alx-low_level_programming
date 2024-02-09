#include "main.h"
/**
 * get_bit - function that gives the value of the bit localised by an index
 * @n: first parameter.
 * @index: the index of the value test
 * Return: return (-1) in error, or the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int i = 0, tester = 0;
int flag = 0;
tester = n;
while (tester > 0)
{
tester = tester >> i;
i++;
}
if (index > i)
	return (-1);
flag = (n >> index) & 1;
return (flag);
}
