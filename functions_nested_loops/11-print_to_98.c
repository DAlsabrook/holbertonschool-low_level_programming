#include "main.h"
/**
 * print_to_98 - prints all ints from given number to 98
 * @n: the number given to start the count
 *
 * Return: 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			if (n >= 100)
			{
				_putchar(n / 100 + '0');
			}
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n--;
		}
		else if (n < 98)
		{
			if (n <= -100)
			{
				_putchar(n / 100 + '0');
				_putchar(n / 10 + '0');
			}
			else if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			else if (n <= -10 && n >= -99)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
