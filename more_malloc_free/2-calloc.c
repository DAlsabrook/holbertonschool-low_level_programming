#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: amount of elements in array
 * @size: size of bytes per element
 *
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		*arr[i] = 0;
	}
	return (arr);
}
