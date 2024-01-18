#include "main.h"
/**
 * alloc_grid - function that creates a 2d array
 * @width: columns of the array
 * @height: rows of the array
 * Return: return (grid) the created array
 */
int **alloc_grid(int width, int height)
{
int **grid;
int h, w, k, flag;
if (width < 1 || height < 1)
	return (NULL);
flag = 0;
grid = malloc(sizeof(int *) * height);
if (!grid)
{
	free(grid);
	return (NULL);
}
for (h = 0; h < height; h++)
{
	grid[h] = malloc(sizeof(int) * width);
	if (!(grid[h]))
	{
		flag = 1;
		break;
	}
}
if (flag == 1)
{
	for (k = h - 1; k >= 0; k--)
	{
		free(grid[k]);
	}
	free(grid);
return (NULL);
}
for (h = 0; h < height; h++)
{
	for (w = 0; w < width; w++)
	{
		grid[h][w] = 0;
	}
}
return (grid);
}
