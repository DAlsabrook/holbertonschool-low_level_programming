#include "main.h"
/**
 * rev_string - returns reversed string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char c;
	int lc = strlen(s);

	for (i = lc; i >= 0; i--)
	{
		*s[i] = c[i];
	}
}
