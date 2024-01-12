#include "main.h"
/**
 * supp_sqrt - function that returns the natural square of an int by recursion
 * @a: number to be squared.
 * @b: the natural square root
 * Return: (-1) if no square root found of the sr
 */
int supp_sqrt(int a, int b)
{
if (b * b == a)
	return (b);
if (b * b != a && b <= a / b)
	return (supp_sqrt(a, b + 2));
else
	return (-1);
}
/**
* _sqrt_recursion - function that returns the ns of an int by recursion
* @n: number to be squared.
* Return: (-1) if no square root found of the sr
*/
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
if (n % 2 == 0)
	return (supp_sqrt(n, 2));
else
	return (supp_sqrt(n, 1));
}
