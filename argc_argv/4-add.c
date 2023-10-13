#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints addition of arguments
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0 (succes) 1 (error)
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				result += atoi(argv[i]);	
			}
			else
			{
				printf("Error\n");

				return (1);
			}
		}
		printf("%d\n", result);
	}

	return (0);
}
