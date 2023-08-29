#include "variadic_functions.h"
/**
 * main - Entry point
 * Return: return (0) success
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list hadadiali;
if (n < 1)
	return (0);
va_start(hadadiali, n);
for (i = 0; i < n; i++)
	sum += va_arg(hadadiali, int);
va_end(hadadiali);
return (sum);
}
