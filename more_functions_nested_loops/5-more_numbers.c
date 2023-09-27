#include "main.h"
/**
 * more_numbers - prints range 10 times
 *
 * return: nada
 */
void more_numbers(void)
{
	int i;
	int c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
