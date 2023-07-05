#include "main.h"
/**
 * _print_rev_recursion - reverses then prints a string with recursion
 * @s: pointer to the string to be reversed and printed
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
