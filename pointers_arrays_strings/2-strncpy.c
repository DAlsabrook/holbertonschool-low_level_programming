#include "main.h"
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
	int dlen = _strlen(dest);
	int slen = _strlen(src);
	int i;

	for (i = 0; i < slen && i < n; i++)
	{
		dest[i] = src[i];
		dlen++;
	}

	return (dest);
}
