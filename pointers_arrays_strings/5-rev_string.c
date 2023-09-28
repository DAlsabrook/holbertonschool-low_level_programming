#include "main.h"
/**
 * rev_string - returns reversed string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, x;
	char c, temp;
	
	for (i = 0; s[i] != 0; i++)
	{
		continue;
	}
	
	x = i - 1;

	for (i = x; i >= 0; i--)
	{
		temp[i] = c[i];
		c[i] = s[i];
		s[i] = temp[i];
	}
}
