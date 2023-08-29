#include <stdio.h>
/**
 * main - Entry point
 * Return: return (0) success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (!array || size <= 0 || !cmp)
	return (-1);
for (i = 0; i < size; i++)
	if (cmp(array[i])) return (i);
return (-1);
}
