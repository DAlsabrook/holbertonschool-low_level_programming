#include "variadic_functions.h"
/**
 *
 *
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int tmp;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, int);
		if (separator != NULL && *separator != '\0' && i < (n - 1))
		{
			printf("%s%s", tmp, separator);
		}
		else
		{
			printf("%s", tmp);
		}
	}
	printf("\n");

	va_end(args);
}
