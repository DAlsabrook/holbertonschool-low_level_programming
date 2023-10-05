#include "main.h"
#include <stddef.h>
/**
 * _strchr - find a char in string array
 * @s: string array
 * @c: char being found
 *
 * Return: pointer to first occurrence of c in *s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return ((char *) s + i);
		}
	}

	return ("");
}
