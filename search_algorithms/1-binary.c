#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using the Binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * 
 * Return: index that value was found
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, l = 0, r = size;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
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
