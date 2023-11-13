#include "main.h"
/**
 * clear_bit - set value of bit to 0 at index
 * @n: bits
 * @index: index to set to 0
 *
 * Return: 1 if worked. -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int tmp = index;

	if (index > 64)
		return (-1);
	while (tmp > 0)
	{
		i <<= 1;
		tmp--;
	}
	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
