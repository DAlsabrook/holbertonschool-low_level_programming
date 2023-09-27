#include "main.h"
/**
 * more_numbers - prints range 10 times
 *
 * return: nada
 */
void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_pitchar('\n');
	}
}
