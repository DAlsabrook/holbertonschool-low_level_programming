#include "main.h"
/**
 * print_line - prints line
 * @n: number of line to be printed
 *
 * return: void
 */
void print_line(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
