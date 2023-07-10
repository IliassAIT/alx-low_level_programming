#include "main.h"
/**
 * create_array - func that allocates then create
 *                an array and fill it with chars
 * @size: size of the memory filled
 * @c: the char to be filled to the array
 * Return: return pointer to the created array or NULL
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *mem;
if (size == 0)
	return (NULL);
mem = malloc(sizeof(char) * size);
if (!mem)
	return (NULL);
for (i = 0; i < size; i++)
{
mem[i] = c;
}
return (mem);
}
