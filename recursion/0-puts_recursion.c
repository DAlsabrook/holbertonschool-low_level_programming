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
	_putchar(t);
	s++;
}
