#include "main.h"
#include <stdlib.h>
/**
 * array_range - func that allocates mem for array
 *		and init it from min to max
 * @min: first int of the array.
 * @max: last int of the array.
 * Return: return ptr to the created array if success
 *	   return (NULL) if failed
 */
int *array_range(int min, int max)
{
int *range;
int i;
if (min > max)
	return (NULL);
range = malloc(sizeof(int) * (max - min + 1));
if (!range)
{
	return (NULL);
}
for (i = min; i <= max; i++)
{
range[i - min] = i;
}
return (range);
}
