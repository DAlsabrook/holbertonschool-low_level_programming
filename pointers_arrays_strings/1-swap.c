#include "main.h"
/**
 * swap_int - swaps ints
 * @a: first int given
 * @b: second int given
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
