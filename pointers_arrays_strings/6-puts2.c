#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints everyother char of string
 * @str: string to use
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;

	j = _strlen(str) - 1;

	for (i = 0; i <= j; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
