#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * Return: return (0) success
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
for (i = 0; i < nmemb *size; i++)
	*((char *)cont + i) = 0;
return (cont);
}
