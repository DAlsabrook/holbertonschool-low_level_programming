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
	char j;
	int let[10] = {'a', '4', 'A', '4',
		'e', '3', 'E', '3',
		'o', '0', 'O', '0',
		't', '7', 'T', '7',
		'l', '1', 'L', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; let[j] == c[i]; j++)
		{
			if (c[i] == let[j])
			{
				c[i] = let[j + 1];
			}
		}
	}

	return (c);
}
