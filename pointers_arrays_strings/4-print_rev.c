#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int c;

	for (i = 0; s[i] != 0; i++)
	{
		continue;
	}

	c = i - 1;

	for (i = c; i > 0; i--)
	{
		_putchar(s[i]);
	}
_putchar('\n');
}
