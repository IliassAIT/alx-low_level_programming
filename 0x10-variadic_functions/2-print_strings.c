#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Variadic func that prints string
 * @separator: a const pointer to the separator str.
 * @n: the number of arguments to later be elements of the str.g
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list strargs;
va_start(strargs, n);
for (i = 0; i < n; i++)
{
if (separator != NULL && i != 0)
printf("%s", separator);
str = va_arg(strargs, char *);
if (str)
	printf("%s", str);
else if (!str)
	printf("(nil)");
}
printf("\n");
va_end(strargs);
}
