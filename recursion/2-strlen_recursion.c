#include "main.h"
/**
 * _strlen_recursion - find string length with recursion
 * @s: string being passed in
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}
