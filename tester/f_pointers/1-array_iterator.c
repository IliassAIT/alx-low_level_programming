#include "function_pointers.h"
/**
 * main - Entry point
 * Return: return (0) success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (size > 0 && array && action)
for (i = 0; i < (int) size; i++)
	action(array[i]);
}
