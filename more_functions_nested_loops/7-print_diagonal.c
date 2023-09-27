#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number of times slash prints
 *
 * return: void
 */
void print_diagonal(int n)
{
	int i;
	int s;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			while (s <= i)
			{
				_putchar(32);
				s++;
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	_putchar('\n');
}
