#include "main.h"
/**
 * is_prime_number - finds if number is prime
 * @n: number to find prime
 *
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return(0);
	}
	return (prime_time(n, --n));
}

/**
 * prime_time - recursivly finds prime number
 * @n: number to find if prime
 * @i: iterater
 *
 * Return: 1 if prime and 0 if not
 */
int prime_time(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_time(n, --i));
}
