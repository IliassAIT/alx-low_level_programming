#include "main.h"
/**
 * create_array - function that creates an array and initializes it
 * @size: size of the array
 * @c: char of the array
 * Return: return pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
s = malloc(sizeof(c) * size);
if (!s)
{
	free(s);
	return (NULL);
}
for (i = 0; i < size; i++)
{
	s[i] = c;
}
return (s);
}
