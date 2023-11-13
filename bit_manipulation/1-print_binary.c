#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to use
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned int i = 0;

	if (n > 0)
	{
		i = n & 1;
		n >>= 1;
		if (n != 0)
			print_binary(n);
	}
	putchar('0' + i);
}
