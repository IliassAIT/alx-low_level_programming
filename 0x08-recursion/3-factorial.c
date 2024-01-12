#include "main.h"
/**
 * factorial - Function that calculates the factorial by recursion
 * @n: the int to be fact
 * Return: return (-1) if negative or the result
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
return (factorial(n - 1) * n);
}
