#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the grid
 *
 * @grid: grid of memos
 * @height: int
 *  Return: void
 */
void free_grid(int **grid, int height)
{
	int u = 0;

	for (; u < height; u++)
		free(grid[u]);
	free(grid);
}
