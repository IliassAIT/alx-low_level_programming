#include "variadic_functions.h"
/**
 * main - Entry point
 * Return: return (0) success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
int number = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
number = va_arg(args, int);
if (separator && (i > 0 && i <= n - 1))
	printf("%s", separator);
printf("%d", number);
}
printf("\n");
va_end(args);
}
