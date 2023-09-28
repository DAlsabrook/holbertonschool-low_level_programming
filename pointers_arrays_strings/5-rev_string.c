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
	char* temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		temp[i] = s[i];
	}
	for (c = i - 1; c >= 0; c++)
	{
		*s[c] = temp[i];
		i--;
	}
}
