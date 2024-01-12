#include "main.h"
/**
 * supp_prime - function that checks if an int has a prime
 * @a: number to be checked
 * @b: checker
 * Return: return (1) if a is prime and (0) if not
 */
int supp_prime(int a, int b)
{
if (a % b != 0 && b > a / b)
	return (1);
if (a % b == 0)
	return (0);
else
	return (supp_prime(a, b + 2));
}
/**
 * is_prime_number - function that checks if an int has a prime
 * @n: number to be checked
 * Return: return (1) if a is prime and (0) if not
 */
int is_prime_number(int n)
{
if (n <= 1 || n % 2 == 0)
	return (0);
else
	return (supp_prime(n, 3));
}
