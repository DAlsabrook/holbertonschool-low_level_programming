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
			for (s = 0; s < i; s++)
			{
				_putchar(32);
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else if (n < 0)
	{
		_putchar('\n');
	}
}
