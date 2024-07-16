#include "main.h"
/**
 * free_grid - free 2 dimentional array
 * @grid: pointer to pointer of the array
 * @height: height of the matrix
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
