#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: string passed in
 * @accept: accepted chars
 *
 * Return: number of bytes in s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;
	int nm = 0;

	for (i = 0; s[i]; i++)
	{
		if (nm >= 1)
		{
			break;
		}

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				nm = 0;
				count++;
				break;
			}
			else if (s[i] != accept[j])
			{
				nm++;
			}
		}
	}
	return (count);
}
