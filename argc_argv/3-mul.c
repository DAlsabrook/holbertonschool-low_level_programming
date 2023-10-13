#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply arguments given
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 or 1 if there are not at least 2 arguments
 */
int main(int argc, char *argv[])
{
	int i;
	int nums = 0;
	int result = 1;

	if (argc <= 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			nums = strtol(argv[i], NULL, 10);
			result *= nums;
		}
		printf("%d\n", result);
	}

	return (0);
}
