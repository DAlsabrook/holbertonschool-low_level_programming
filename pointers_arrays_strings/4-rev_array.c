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
	int a_len = _strlen(a);
	int i;
	int a_end = a_len;

	for (i = 0; i < a_len / 2; i++)
	{
		a[i] = a[a_end];
		a_end++;
	}
}
