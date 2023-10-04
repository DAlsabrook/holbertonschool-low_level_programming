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
	int i, j, tmp;

	i = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
