#include "main.h"
/**
 * string-nconcat - concats two strings
 * @s1: first string given
 * @s2: second string given
 * @n: number of bytes from s2 to use
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *new_str;

	*new_str = malloc(strlen(s1) + (strlen(s2) - n));
	
	if (new_str = NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];

		if (i < n)
		{
			new_str[strlen(s1) + i] = s2[i];
		}
	}

	new_str[i] = '\0';
	return (new_str);
}
