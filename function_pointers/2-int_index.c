#include "function_pointers.h"
/**
 * int_index - searches for specific interger
 * @array: array to search
 * @size: array size
 * @cmp: used to compare values
 *
 * Return: index of element the int is found in
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
}
