#include "main.h"
/**
 * _memset - set an empty memory
 * @s: pointer to the first char
 * @b: new char
 * @n: number of chars to be changed
 * Return: memory setted
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
