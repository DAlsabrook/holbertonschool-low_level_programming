#include "main.h"
/**
 * _isalpha - find if c is a letter
 * @c: paramiter passed in
 *
 * Return: 1 is c in a letter (upper or lower)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
