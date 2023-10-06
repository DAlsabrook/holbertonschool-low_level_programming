#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string to look through
 * @needle: string trying to find
 *
 * Return: new string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if ((haystack[i] == needle[j])
				       	&& (haystack[i + 1] == needle[j + 1])
				       	&& (haystack[i + 2] == needle[j + 2]))
			{
				return ((char *) haystack + i);
			}
		}
	}

	return ((char *) haystack[0]);
}
