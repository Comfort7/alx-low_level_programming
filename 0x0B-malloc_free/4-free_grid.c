#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid
 * @grid: pointer to the 2D grid
 * @height: height of the grid
 *
 * This function deallocates the memory allocated for the 2D grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
