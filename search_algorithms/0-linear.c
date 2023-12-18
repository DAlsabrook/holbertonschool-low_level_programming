#include "search_algos.h"
/**
 * linear_search - searches and array for a value
 * @array: array to use
 * @size: size of array
 * @value: value to look for
 *
 * Return: first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	int element = 0;
	size_t check = 0;

	if (array == NULL || size <= 0)
		return (-1);
	while (check < size)
	{
		printf("Value checked array[%d] = [%d]\n", element, array[element]);
		if (array[element] == value)
		{
			return (element);
		}
		element++;
		check++;
	}
	return (-1);
}
