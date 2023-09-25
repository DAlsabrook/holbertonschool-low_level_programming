#include "main.h"
#include <stdlib>
/**
 * print_to_98 - prints all ints from given number to 98
 * @n: the number given to start the count
 *
 * Return: 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("98\n");
}
