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
	char* temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		temp[i] = s[i];
	}
	for (i = i - 1; i >= 0; i--)
	{
		*s[i] = temp[i];
	}
}
