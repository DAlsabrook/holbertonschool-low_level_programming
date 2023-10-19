#include "main.h"
/**
 * _strdup - copies a str to a new location
 * @str: string to copy
 *
 * Return: char* to new string copy
 */
char *_strdup(char *str)
{
	int len, i;
	char *str_cp;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}
	
	str_cp = malloc(sizeof(char) * len + 1);

	if (str_cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		str_cp[i] = str[i];
	}

	return (str_cp);

}
