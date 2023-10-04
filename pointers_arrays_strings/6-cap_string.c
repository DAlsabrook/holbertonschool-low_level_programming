#include "main.h"
/**
 * cap_string - capitalize first letter of every word
 * @c: string to work with
 *
 * Return: string with caps
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (c[i] - 1 != (c[i] >= 'a' && c[i] <= 'z'))
			{
				c[i] = c[i] - 32;
			}
		}
	}

	return (c);
}
