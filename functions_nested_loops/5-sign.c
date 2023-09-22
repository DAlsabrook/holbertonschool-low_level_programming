#include "main.h"
/**
 * print_sign - finds if n is >, <, or == 0
 * @n: the paramiter passed in
 *
 * Return: 1 if > 0 print'+'
 *	0 if = 0 print'0'
 *	-1 if < 0 print'-'
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
