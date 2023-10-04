#include "main.h"
#include "2-strlen.c"
/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: bytes to use of src
 *
 * Return: new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
