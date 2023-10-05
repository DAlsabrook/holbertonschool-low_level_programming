#include "main.h"
/**
 * leet - turn string to 1337
 * @c - string passed in
 *
 * Return: new string
 */
char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == 'a' || 'A')
		{
			c[i] = '4';
		}
		else if (c[i] == 'e' || 'E')
		{
			c[i] = '3';
		}
		else if (c[i] == 'o' || 'O')
		{
			c[i] = '0';
		}
		else if (c[i] == 't' || 'T')
		{
			c[i] = '7';
		}
		else if (c[i] == 'l' || 'L')
		{
			c[i] = '1';
		}
	}

	return (c);
}
