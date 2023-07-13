#include "main.h"
#include <stdlib.h>
/**
 * _realloc - extends or allocate a new sized memory
 * @ptr: the already exisiting pointer.
 * @old_size: the old size of the memory.
 * @new_size: the new size of the memory.
 * Return: return (ptr) to the new allocated mem or NULL in failures.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *newptr = ptr;
unsigned int i;
if (new_size == old_size)
	return (ptr);
if (ptr == NULL)
{
	ptr = malloc(new_size);
	if (!ptr)
		return (NULL);
	return (ptr);
}
if (ptr != NULL && new_size == 0)
{
	free(ptr);
	return (NULL);
}
newptr = malloc(old_size);
if (!newptr)
	return (NULL);
for (i = 0; i <= old_size; i++)
{
	newptr[i] = *((char *)ptr + i);
}
free(ptr);
ptr = malloc(new_size);
if (!ptr)
	return (NULL);
for (i = 0; i < old_size; i++)
{
	*((char *)ptr + i) = newptr[i];
}
free(newptr);
return (ptr);
}
