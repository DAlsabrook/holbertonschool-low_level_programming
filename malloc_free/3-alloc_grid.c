#include "main.h"
/**
 * alloc_grid - 2 dimentional array of ints
 * @width: width of arr
 * @height: height of arr
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int row, column;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int) * row * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			grid[row][height] = 0;
		}
	}

	return (grid);
}
