#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: comparison
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
	{
		return (-13);
	}
	else if (s1 < s2)
	{
		return (13);
	}
	else
	{
		return (0);
	}
}
