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
	if (index > 64)
		return(-1);
	n >> index;
	return (n & 1);
}
