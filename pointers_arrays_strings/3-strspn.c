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
	unsigned int count;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
