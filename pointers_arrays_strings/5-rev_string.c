#include "main.h"
/**
 * rev_string - returns reversed string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c;
	char *temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (c = 0; c < i / 2; c++)
	{
		*temp = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = *temp;
	}
}
