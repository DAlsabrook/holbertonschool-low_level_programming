#include "main.h"
#include "2-strlen.c"
/**
 * _strcat - concats two strings
 * dest - where is concats to
 * src - source strings
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int dlen = _strlen(*dest);
	int slen = _strlen(*src);
	int i;

	for (i = 0; i < slen; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
}
