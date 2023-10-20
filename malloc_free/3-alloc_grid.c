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
	int i, row, column;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid)
	{
		for (row = 0; row < height; row++)
		{
			grid[row] = (int *)malloc(sizeof(int) * width);
			if (!grid[row])
			{
				for (i = 0; i < row; i++)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
		}
		for (row = 0; row < height; row++)
		{
			for (column = 0; column < width; column++)
			{
				grid[row][column] = 0;
			}
		}
		return (grid);
	}
	else
		return (NULL);
}
