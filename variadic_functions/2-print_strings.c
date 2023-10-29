#include "variadic_functions.h"
/**
 *
 *
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, char *);
		if (separator != NULL && *separator != '\0' && i < (n - 1) && tmp != NULL)
		{
			printf("%s%s", tmp, separator);
		}
		else if (tmp == NULL)
		{
			tmp = "(nil)";
			printf("%s", tmp);
		}
		else
		{
			printf("%s", tmp);
		}
	}
	printf("\n");

	va_end(args);
}
