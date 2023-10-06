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
	int k, l;
	int count = 0

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[l])
			{
				for (k = i, l = j; (haystack[k] == needle[l]) && (needle[l] != '\0'); k++ && l++)
				{
					count += 1;
				}
				if (count == needle[l])
				{
					return ((char *) haystack + i);
				}
			}
		}
	}
	return (NULL);
}
