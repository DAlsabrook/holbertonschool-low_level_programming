#include "main.h"
/**
 * _strlen - gets the length of a string
 * @s: string passed in
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; i <= *s; i++)
	{
		if (i == *s)
		{
			_putchar(i + '0');
		}
	}

	return (0);
}
