#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copies string from pointer
 * @dest: destination of copy
 * @src: source to copy from
 *
 * Return: copied sting
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = _strlen(src);
	for (i = 0; i <= j; i++)
	{
		*dest[i] = src[i];
	}

	return (*dest);
}
