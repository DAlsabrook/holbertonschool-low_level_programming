#include "main.h"
/**
 * set_bit - sets value of bit to 1 at given index
 * @n: bit
 * @index: index to set bit
 *
 * Return: 1 when worked. -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 64)
		return (-1);
	while (index > 0)
	{
		i <<= 1;
		index--;
	}
	*n += i;
	return (1);
}
