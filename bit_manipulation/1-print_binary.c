#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to use
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
		_putchar((n & 1) ? '1' : '0');
	}
	else
		_putchar('0');
}
