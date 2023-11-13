#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to use
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	if (n)
	{
		print_binary(n >> 1);
		return ((n & 1) ? '1' : '0');
	}
}
