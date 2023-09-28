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
			_putchar(*s);
		}
		else if (*s == "")
		{
			_putchar('0');
		}
	}

	return (0);
}
