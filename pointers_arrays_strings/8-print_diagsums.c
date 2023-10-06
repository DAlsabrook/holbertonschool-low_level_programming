#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the diagnal s
 * @a: square array
 * @size: size of square array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row, column, count, sumDown, i;
	int nums[20];
	
	count = 0;
	sumDown = 0;

	for (row = 0; row <= size; row++)
	{
		for (column = 0; column <= size; column++)
		{
			if (column == count)
			{
				nums[column] = a[row][column];
			}
		}
		count++;
	}
	
	for (i = 0; i <= size; i++)
	{
		if (nums[i] != '\0')
		{
			sumDown += nums[i];
		}
	}
	printf("%d, ", sumDown);
}
