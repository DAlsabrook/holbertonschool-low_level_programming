#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: array to be printed
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
	}
}
