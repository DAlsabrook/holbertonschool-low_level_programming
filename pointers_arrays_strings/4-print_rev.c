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

	for (i = 0; s[i] == 0; i++)
	{
		if (s[i] == 0)
		{
			for (c = s[i]; c >= s[0]; c--)
			{
				_putchar(s[i]);
			}
		}
	}
	_putchar('\n');
}
