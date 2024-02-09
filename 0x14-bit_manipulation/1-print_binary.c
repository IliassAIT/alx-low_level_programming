#include "main.h"
/**
 * print_binary - function that converts a decimal to binary and prints it
 * @n: decimal to be printed.s
 */
void print_binary(unsigned long int n)
{
if (n > 1)
	print_binary(n >> 1);
if ((n | 1) == n)
	_putchar('1');
if ((n | 1) != n)
	_putchar('0');
}
