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

	if (needle[0] == '\0')
	{
		return (&haystack[0]);
	}
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if ((haystack[i] == needle[j])
				&& (haystack[i + 1] == needle[j + 1])
				&& (haystack[i + 2] == needle[j + 2]))
			{
				return (&haystack[i]);
			}
		}
	}

	return (NULL);
}
