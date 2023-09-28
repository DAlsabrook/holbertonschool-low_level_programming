#include "main.h"
/**
 * puts2 - prints everyother char of string
 * @str: string to use
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= 20; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
