#include "main.h"
/**
 * _memcpy - copies an area of memory
 * @dest: copy sent to
 * @src: adress of memory to copy
 * @n: amount of spots to copy
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
