#include "function_pointers.h"
/**
 * int_index - function that looks for an int
 * @array: the input data array
 * @size: the length of the array
 * @cmp: the pointer to the function
 * Return: index to element if found or -1 if failed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || !array || !cmp)
	return (-1);
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
	return (i);
}
return (-1);
}
}
