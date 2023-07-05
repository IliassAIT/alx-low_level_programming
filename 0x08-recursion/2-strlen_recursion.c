#include "main.h"
/**
 * _strlen_recursion - print the length of a string with recursion
 * @s: pointer to the 1st char of string
 * Return: return (int) length of a string
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
	return (1 + _strlen_recursion(s + 1));
else
	return (0);
}
