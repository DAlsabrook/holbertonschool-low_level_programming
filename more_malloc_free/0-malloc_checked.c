#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: int used to allocate memory
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *res = malloc(b);

	if (res == NULL)
	{
		exit(98);
	}

	return (res);
}
