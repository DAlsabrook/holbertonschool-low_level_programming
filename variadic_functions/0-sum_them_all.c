#include "variadic_functions.h"
/**
 * sum_them_all - sum all args
 * @n: count of args
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int i, x;
	int sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_end(args);

	return (sum);
}
