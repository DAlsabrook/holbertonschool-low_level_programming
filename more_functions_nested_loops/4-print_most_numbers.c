#include "main.h"
/**
 * print_most_numbers - prints most numbers
 *
 * return: void
 */
void print_most_numbers(void)
{
	i int;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
