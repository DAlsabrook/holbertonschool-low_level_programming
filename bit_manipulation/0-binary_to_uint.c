#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary to use
 *
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len = 0;

	if (!b)
		return(0);
	while (b[len])
	{
		num <<= 1;
		if (b[len] == '1')
			num |= 1;
		len++;
	}
	return(num);
}
