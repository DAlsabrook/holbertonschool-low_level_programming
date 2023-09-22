#include "main.h"
/**
 * _islower - checks for lower case letters
 * c - the argument to be checked
 *
 * Return: 1 is lower is present. 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
