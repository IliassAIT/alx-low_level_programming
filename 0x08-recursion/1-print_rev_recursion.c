#include "main.h"
/**
 * _print_rev_recursion - fnction that prints reversly by recursion
 * @s: pointer to the first char of the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
return;
}
