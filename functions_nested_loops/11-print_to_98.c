#include "main.h"
/**
 * print_to_98 - prints all ints from given number to 98
 * @n: the number given to start the count
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
}
