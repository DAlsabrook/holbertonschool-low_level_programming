#include "main.h"
/**
 * print_last_digit - prints the last digit of a num
 * @n: number passed in
 *
 * Return: last digit of number passed in
 */
int print_last_digit(int n)
{
	int ld = n % 10;
	_putchar(ld);
	return (ld);
}
