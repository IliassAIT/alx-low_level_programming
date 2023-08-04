#include "main.h"
/**
 * print_binary - func that converts decimal to binary
 * @n: ul int t be converted.
 */
void print_binary(unsigned long int n)
{
if (n != 0)
{
print_binary(n / 2);
_putchar((n % 2) + '0');
}
}
