#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - returns reversed string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int len = _strlen(s) - 1;
	char tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}

}
