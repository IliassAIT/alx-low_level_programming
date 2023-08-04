#include "main.h"
/**
 * binary_to_uint - function that converts from bin to dec
 * @b: pointer to the binary string.
 * Return: return (0) if failure || decimal number converted.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec = 0;
unsigned int ind = 1;
unsigned int i = 0;
if (!b)
	return (0);
while (b[i] != 0)
{
if (b[i] < '0' || b[i] > '9';
	return (0);
dec += (b[i] - '0') * ind;
ind *= 2;
i++;
}
return (dec);
}
