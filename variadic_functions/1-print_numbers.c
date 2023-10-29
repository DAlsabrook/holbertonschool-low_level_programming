#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separates numbers
 * @n: number of numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int tmp;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, int);
		if (separator != NULL)
		{
			printf("%d%s ", tmp, separator);
		}
		else
		{
			printf("%d", tmp);
		}
	}
	printf("\n");

	va_end(args);
}
