#include "main.h"

#define CUSTOM_INT_MAX 2147483647
#define CUSTOM_INT_MIN (-2147483647 - 1)

/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 *
 * Return: numbers fo the string. If no num return 0
 */
in _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';
		if (sign == 1 && (result > (CUSTOM_INT_MAX - digit) / 10))
		{
			return (CUSTOM_INT_MAX);
		}
		else if (sing == -1 && (result < (CUSTOM_INT_MIN + digit) / 10))
		{
			return (CUSTOM_INT_MIN);
		}
		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
