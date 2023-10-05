#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: array adress passed in
 * @b: is what we are passing into array
 * @n: amount of space times we pass in b
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
