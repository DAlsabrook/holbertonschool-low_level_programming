#include "main.h"
/**
 * rev_string - returns reversed string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, n;

	for (i = 0; s[i] != 0; i++)
	{
		continue;
	}
	n = i - 1;
	for (i = n; i >= 0; i--)
	{
		*s[i] = s[i];
	}
}
