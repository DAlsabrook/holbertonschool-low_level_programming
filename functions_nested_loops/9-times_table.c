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
			_putchar(x * y);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
