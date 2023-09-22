#include "main.h"
/**
 * print_sign - finds if n is >, <, or == 0
 * @n: the paramiter passed in
 *
 * Return: 1 if n > 0; prints '+'
 * 	   0 if n == 0; prints '0'
 * 	  -1 if n < 0; prints '-'
 */
int print_sign(int n)
{
	if (n > 0)
	{
	 	_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
