#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: the bytes size of the memory to be allocated
 * Return: return (ptr) to the allocated mem.
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (!p)
{
	exit(98);
}
return (p);
}
