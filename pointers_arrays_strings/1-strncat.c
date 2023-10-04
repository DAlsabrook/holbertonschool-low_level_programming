#include "main.h"
#include "2-strlen.c"
/**
 * _strncat - concats two strings
 * @dest: destinations
 * @src: source
 * @n: idk
 *
 * Return: new string
 */
char *_strncat(char *dest, char*src, int n)
{
	int dlen = _strlen(dest);
	int i;

	for (i = 0; i < n; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	return (dest);
}
