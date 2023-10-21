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
	unsigned int i, j;
	char *new_str;

	new_str = (char *)malloc(strlen(s1) + (strlen(s2) - n));
	
	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}

	for (j = 0; j <= n; j++)
	{
		new_str[i] = s2[j];
		i++;
	}

	new_str[i] = '\0';
	return (new_str);
}
