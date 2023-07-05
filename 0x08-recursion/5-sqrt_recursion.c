#include "main.h"
/**
 * sqrt_supp - function that include a second parameter to check main func
 * @a: int to be checked
 * @b: supportive integer
 * Return: same as the main func.
 */
int sqrt_supp(int a, int b)
{
if (b * b < a)
	return (sqrt_supp(a, b + 1));
else if (b * b == a)
	return (b);
else
	return (-1);
}
/**
 * _sqrt_recursion - checks if an integer admits a natural sq root
 * @n: int to be checked
 * Return: return (-1) if n has no natural sq root or the square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
else
	return (sqrt_supp(n, 0));
}
