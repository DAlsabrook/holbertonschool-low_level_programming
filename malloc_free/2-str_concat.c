#include "main.h"
#include <string.h>
/**
 * str_concat - Concatonated 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: new string
 */
char *str_concat(char *s1, char* s2)
{
	int i, j;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	new_str = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		new_str[i] = s2[j];
		i++;
	}

	new_str[i] = '\0';

	return (new_str);

}
