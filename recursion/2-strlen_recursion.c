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

 	if(*s != '\0')
	{
		_strlen_recursion(++s);
		len++;
	}
	return (len);
}
