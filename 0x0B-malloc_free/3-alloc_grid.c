#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - func that creates a grid and fill it with 0s
 * @width: the number of columns.
 * @height: the number of rows.
 * Return: return ptr to the grid or null.
 */
int **alloc_grid(int width, int height)
{
int **fullgrid;
int w, h;
if (width <= 0 || height <= 0)
{
return (NULL);
}
fullgrid = malloc(height * sizeof(int *));
if (fullgrid == NULL)
{
	free(fullgrid);
	return (NULL);
}
for (h = 0; h < height; h++)
{
	fullgrid[h] = malloc(width * sizeof(int));
	if (fullgrid[h] == NULL)
	{
	for (h--; h >= 0; h--)
	{
	free(fullgrid[h]);
	}
	free(fullgrid);
	return (NULL);
	}
}
for (h = 0; h < height; h++)
{
	for (w = 0; w < width; w++)
	{
		fullgrid[h][w] = 0;
	}
}
return (fullgrid);
}
