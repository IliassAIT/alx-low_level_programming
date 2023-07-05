#include "main.h"
/**
 * prime_supp - function that adds a second parameter to support the main func
 * @a: int to be checked.
 * @b: supp parameter.
 * Return: same as is_prime_number.
 */
int prime_supp(int a, int b)
{
if (a % b == 0)
	return (0);
else if ((b < (a / b)) && (a % b) != 0)
	return (prime_supp(a, b + 2));
else
	return (1);
}
/**
 * is_prime_number - func that checks if a num is prime
 * @n: int to be checked.
 * Return: return (0) in not prime or (1) if prime.
 */
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
else if (n == 2)
	return (1);
else if ((n != 2) && (n % 2 == 0))
	return (0);
else
	return (prime_supp(n, 3));
}
