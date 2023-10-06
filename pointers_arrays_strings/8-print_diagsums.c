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
	int row, count;
	int down;
	
	down = 0;
	count = 1;

	for (row = 0; row <= size * 2; row++)
	{
		if (count % size == 0)
		{
			down += a[row - (size + 1)];
		}
		else if (row == 0)
		{
			down += a[0];
		}
		count++;
	}
	
	printf("%d, ", down);
}
