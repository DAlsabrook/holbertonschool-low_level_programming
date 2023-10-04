#include "main.h"
#include "2-strlen.c"
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: number of element in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, k;
	int tmp[100];

	for (j = 0; j < n; j++)
	{
		tmp[j] = a[k];
		k--;
	}

	for (i = 0; i < n; i++)
	{
		a[i] = tmp[i];
	}
}
