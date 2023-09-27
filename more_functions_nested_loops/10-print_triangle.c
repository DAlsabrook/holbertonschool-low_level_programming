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
	int w;
	int space;
	int pound;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = size - h; w > 0; w--)
			{
				_putchar(' ');
			}

			for (w = 0; w < size; w++)
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
