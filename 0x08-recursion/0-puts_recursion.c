#include "main.h"
/**
 * _puts_recursion - function that prints a string by recursion
 * @s: pointer to the first char of the string.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
_putchar(*s);
_puts_recursion(s + 1);
}
