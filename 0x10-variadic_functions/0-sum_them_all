#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - var func that sums all taken arguments
 * @n: number of arguments to be summed.
 * Return: return (0) if n == 0 or the sum of passed arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list args;
va_start(args, n);
if (n == 0)
	return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
