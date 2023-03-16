#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-d grid previous created
 * @grid: 2-d grid
 * @height: height of grid
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
