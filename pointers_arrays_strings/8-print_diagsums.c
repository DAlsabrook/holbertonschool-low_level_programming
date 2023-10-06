#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the diagnal
 * @a: square array
 * @size: size of square array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
        int row;
        int down, up;

        down = 0;
        up = 0;

        for (row = 0; row < size; row++)
        {
		down += a[(size * row) + row];
		up += a[(size * (row + 1) - (row + 1))];
        }
        printf("%d, %d\n", down, up);
}
