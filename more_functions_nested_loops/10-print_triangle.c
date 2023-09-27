#include "main.h"
/**
 * print_triangle - prints triangle
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
			for(w = 0; w < size; w++)
			{
				for (space = (w - 1); space <= w; space--)
				{
					_putchar(' ');
				}
				for (pound = ((w - w) + 1); pound <= w: pound++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}	
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
