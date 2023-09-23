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
		for (y = 0; y <= 9; y++)
		{
			int ans = x * y;

			if ( ans > 9 )
			{
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
				_putchar(',');
                        	_putchar(' ');
			}
			else
			{
				_putchar(ans % 10 + '0');
				_putchar(',');
                        	_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
