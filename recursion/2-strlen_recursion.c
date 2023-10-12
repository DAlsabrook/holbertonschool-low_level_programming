#include "main.h"
/**
 * _strlen_recursion - find string length with recursion
 * @s: string being passed in
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	len++;
 	if(*s != '\0')
	{
		len += _strlen_recursion(len + (++s));
	}
	return (len);
}
