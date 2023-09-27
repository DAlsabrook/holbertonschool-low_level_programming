#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int h;
	int c;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (c = size - h; c > 0; c--)
			{
				_putchar(' ');
			}

			for (c = (h - h) + 1; c < size; c++)
			{
				_putchar('#');
			}

			if (h == size)
				break;

			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
