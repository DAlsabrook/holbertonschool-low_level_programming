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
	int range;

	if (min > max)
		return (NULL);
	while (i < max)
		i++;
	range = i - min + 1;
	arr = (int *)malloc(sizeof(int) * range);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= range; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
