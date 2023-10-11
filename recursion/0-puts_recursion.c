#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	char t = *s;
	if (t != "\0")
	{
		_putchar(t);
		s++;
	}
}
