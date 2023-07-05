#include "main.h"
/**
 * factorial - function that calculates the factorial of an int.
 * @n: integer to be the parameter.
 * Return: return (-1) if n is negative or the factorial of n.
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));
}
