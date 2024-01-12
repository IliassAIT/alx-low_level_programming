#include "main.h"
/**
 * _strlen_recursion - function that mimics strlen but by recursion
 * @s: pointer to the first char of the string.
 * Return: (int) the length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
return (_strlen_recursion(s + 1) + 1);
}
