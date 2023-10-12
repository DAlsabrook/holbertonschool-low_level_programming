#include "main.h"
/**
 * _pow_recursion - find the power of two numbers
 * @x: number given
 * @y: second number given
 *
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(y - 1));
}
