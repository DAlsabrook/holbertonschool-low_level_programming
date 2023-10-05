#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - finds a byte and prints the rest
 * @s: string to pass in
 * @accept: accepted chars
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return ((char *) s + i);
			}
		}
	}

	return(NULL);
}
