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

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 10; y++)
		{
			ans = x * y;

			_putchar(',');
			_putchar(' ');

			if ( ans <= 9 );
			{
				_putchar(ans / 10 + '0');
			}
			else
			{
				_putchar(ans % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
