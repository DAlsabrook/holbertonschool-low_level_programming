#include "main.h"
/**
 *
 *
 * Return:
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);
	while (i < max)
		i++;

	arr = malloc(sizeof(int) * (i - min));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < max; i++)
	{
		arr[i] = min;
		min++;	
	}
	return (arr);
}
