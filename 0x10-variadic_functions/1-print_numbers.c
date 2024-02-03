#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - var func that prints number
 * @separator: pointer to the separator string.
 * @n: a constant int that marks the number of args.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if ((i < (n - 1)) && separator)
	printf("%s", separator);
}
printf("\n");
va_end(args);
}
