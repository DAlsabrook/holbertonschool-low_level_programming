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
	int j;

	if (min > max)
		return (NULL);
	while (i < max)
		i++;
	j = i - min;
	arr = (int)malloc(sizeof(int) * j + 1);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
