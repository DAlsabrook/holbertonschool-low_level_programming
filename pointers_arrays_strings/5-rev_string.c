#include "main.h"
/**
 * rev_string - returns reversed string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, j;
	char temp[10000];

	for (i = 0; s[i] != '\0'; i++)
	{
		temp[i] = s[i];
	}

	j = i;

	for (c = i - 1; c >= j; c++)
	{
		s[c] = temp[i];
		i--;
	}
}
