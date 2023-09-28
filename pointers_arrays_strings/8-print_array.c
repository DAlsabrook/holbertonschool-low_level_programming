#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * print_array - prints n number of chars from string
 * @a: string to br printed
 * @n: number of chars printed from the string
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
