#include "main.h"
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
	char *first;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			first = s[i];
		}
	}

	return(first);
}
