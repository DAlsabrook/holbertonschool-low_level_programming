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
	char temp;

	for (i = 0; s[i] != '\0'; i++)

	for (c = i; c >= 0; c--)
	{
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
	}
}
