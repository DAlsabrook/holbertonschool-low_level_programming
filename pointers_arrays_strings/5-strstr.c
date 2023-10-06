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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if ((haystack[i] == needle[l])
				       	&& (haystack[i + 1] == needle[l + 1])
				       	&& (haystack[i + 2] == needle[l + 2]))
			{
				return ((char *) haystack + i);
			}
		}
	}
	return (NULL);
}
