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
		mid = l + (r - l) / 2;
		/*value found*/
		if (value == array[mid])
		{
			return (mid);
		}
		printf("Searching in array: ");
		print_array(array, l, r);
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
