#include "main.h"
/**
 * _abs - give absolute value
 * @n: number passed in
 *
 * Return: 0
 */
int _abs(int n)
{
	int p;

	if (n > 0)
	{
		for (p = 0; p <= n; p++)
		{
			if (p == n)
			{
				_putchar(p);
			}
		}
	}
	else if (n < 0)
	{
		for (p = 0; p >= n; p--)
		{
			if (p == n)
			{
				_putchar(p);
			}
		}
	}

	return (0);
}
