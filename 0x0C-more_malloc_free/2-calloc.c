#include "main.h"
#include <stdlib.h>
/**
 * _calloc - func that allocate and initialize mem to 0
 * @nmemb: number of elements
 * @size: size of each element
 * Return: return (ptr) to the allocated mem or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *cont;
if (size == 0 || nmemb == 0)
	return (NULL);
cont = malloc(nmemb * size);
if (!cont)
{
	free(cont);
	return (NULL);
}
for (i = 0; i < nmemb * size; i++)
	*((char *) cont + i) = 0;
return (cont);
}
