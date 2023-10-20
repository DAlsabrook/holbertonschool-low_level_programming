#include "main.h"
/**
 * free_grid - frees grid
 * @grid: grid to be freed
 * @height: height of grid to be freed
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
