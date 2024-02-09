#include "main.h"
/**
 * binary_to_uint - function that converts a binary number (string) to uint
 * @b: pointer to the first binary number of the string
 * Return: return (0) if error or the unsigned int in decimal
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i, j, sum, len;
sum = 0;
len = 0;
if (!b)
	return (0);
for (i = 0; b[i]; i++)
{
if (b[i] != '1' && b[i] != '0')
	return (0);
}
len = i - 1;
for (j = i - 1; j + 1 > 0; j--)
{
if (b[j] == '1')
{
	sum += 1 << (len - j);
}
}
return (sum);
}
