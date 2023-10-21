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
	int *Iarr;
	char *Carr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	Carr = malloc(nmemb *size);
	Iarr = malloc(nmemb * size);
	if (Iarr == NULL || Carr == NULL)
		return (NULL);
	if (size == sizeof(int))
	{
		for (i = 0; i < nmemb; i++)
		{
			Iarr[i] = 0;
		}
		free(Carr);
		return (*Iarr);
	}
	if (size == sizeof(char))
	{
		for (i = 0; i < nmemb; i++)
		{
			Carr[i] = 0;
		}
		free(Iarr);
		return (*Carr[i]);
	}
	return (NULL);
}
