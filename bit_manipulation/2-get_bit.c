#include "main.h"
/**
 * get_bit - gets value of bit and given index
 * @n: bits
 * @index: index to get bit
 *
 * Return: value of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return(-1);
	i = n >> index;
	return (i & 1);
}
