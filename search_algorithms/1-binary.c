#include "search_algos.h"
/**
 * binary_search - searches for value in an array using the Binary search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index that value was found
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, l = 0, r = size - 1, i;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		mid = l + (r - l) / 2;
		/*value found*/
		if (value == array[mid])
		{
			return (mid);
		}
		/*case to go right*/
		if (array[mid] < value)
		{
			l = mid + 1;
		}
		/*case to go left*/
		if (array[mid] > value)
		{
			r = mid - 1;
		}

	}
	return (-1);
}
