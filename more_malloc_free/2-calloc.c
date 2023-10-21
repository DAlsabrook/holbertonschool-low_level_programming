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
	char *Carr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	Carr = malloc(nmemb * size);
	if (Carr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		Carr[i] = 0;
	}

	return (Carr);
}
