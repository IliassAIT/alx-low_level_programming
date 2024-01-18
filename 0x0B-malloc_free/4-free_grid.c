#include "main.h"
/**
 * free_grid - function that frees a grid
 * @grid: 2d array to be freed.
 * @height: the rows of the array.
 */
void free_grid(int **grid, int height)
{
int h;
if (grid != NULL)
{
for (h = 0; h <= height; h++)
{
	free(grid[h]);
}
free(grid);
}
}
