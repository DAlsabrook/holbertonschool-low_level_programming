#include <stdio.h>
/**
 * main - prints all numbers of base sixteen
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		printf("%x", i);
	}
	printf("\n");

	return (0);
}
