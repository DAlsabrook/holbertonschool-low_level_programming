#include "main.h"
/**
 * flip_bits - gets number of bits needed to flip from on number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int counter;

	for (counter = 0; diff; counter++)
	{
		diff &= (diff - 1)
	}
	return (counter);
}
