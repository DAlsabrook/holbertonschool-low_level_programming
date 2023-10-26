#include "function_pointers.h"
/**
 * array_iterator - applys function to elements of array
 * @array: array to iterate
 * @size: size of array
 * @action: function to use on elements of array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
