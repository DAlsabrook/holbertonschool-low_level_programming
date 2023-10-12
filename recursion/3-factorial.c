#include "main.h"
/**
 * factorial - give factorial of given number
 * @n: number given
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(--n));
}
