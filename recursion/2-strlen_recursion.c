#include "main.h"
/**
 * _strlen_recursion - find string length with recursion
 * @s: string being passed in
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len;

 	if(*s != '\0')
	{
		len++;
	}
	return (len);
}
