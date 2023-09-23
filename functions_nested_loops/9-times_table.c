#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * return: void
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 0; y <= 9; y++)
		{
			int ans = x * y;

			_putchar(',');
			_putchar(' ');

			if ( ans > 9 )
			{
				_putchar(ans / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(ans % 10 + '0');
		}
		_putchar('\n');
	}
}
