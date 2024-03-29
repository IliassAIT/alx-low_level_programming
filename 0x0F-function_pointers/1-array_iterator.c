#include "function_pointers.h"
/**
 * array_iterator - A function executer depending on the given par
 * @array: the input array
 * @size: the array's sizey
 * @action: the pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array == NULL || action == NULL)
	return;
for (i = 0; i < (int) size; i++)
	action(array[i]);
}
