#include "main.h"
#include <stdlib.h>
/**
 * _islower - checks for lower case letters
 *
 * Return: 1 is lower is present. 0 otherwise.
 */
int _islower(int c)
{
	int c;

	if (islower(c) == true)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
