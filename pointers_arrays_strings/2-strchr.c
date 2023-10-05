#include "main.h"
#include <stddef.h>
/**
 * _strchr - find a char in string array
 * @s: string array
 * @c: char being found
 *
 * Return: pointer to first occurrence of c in *s
 */
char *_strchar(char *s, char c)
{
	int i;
	int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			found++;
			break;
		}
	}
	
	if (found == 1)
	{
		return (char *)s+i;
	}
	else
		return (NULL);
}
