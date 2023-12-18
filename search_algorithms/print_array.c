#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @start: elemnt to start printing
 * @array: The array to be printed
 * @end: Number of elements in @array
 */
void print_array(const int *array, int start, int end)
{
	while (array && start < end)
	{
		if (start > 0)
			printf(", ");
		printf("%d", array[start]);
		++start;
	}
	printf("\n");
}
