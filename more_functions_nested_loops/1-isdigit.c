#include "main.h"
/**
 * _isdigit - checks for 0-9
 * @c: number passed in
 *
 * Return: 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
