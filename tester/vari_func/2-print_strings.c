#include "variadic_functions.h"
/**
 * main - Entry point
 * Return: return (0) success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list str;
va_start(str, n);
for (i = 0; i < n; i++)
{
printf("%s", va_arg(str, char *));
if (separator && i < n - 1)
	printf("%s", separator);
}
printf("\n");
va_end(str);
}
