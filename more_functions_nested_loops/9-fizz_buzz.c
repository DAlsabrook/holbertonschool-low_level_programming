#include "main.h"
#include <stdio.h>
/**
 * main - number divisible by 3 prints fizz, divisible by prints buzz
 *
 * return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
			{
				printf("FizzBuzz");
				printf(" ");
			}
			else
			{
				printf("Fizz");
				printf(" ");
			}
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("Buzz");
	printf("\n");

	return (0);
}
