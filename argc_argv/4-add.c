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
	int i, j;
	int result = 0;
	int count = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(a[i]); j++)
			{
				if (isdigit(argv[i][j]) && argv[i][j] != '\0')
				{
					count++;	
				}
			}
			if (count == strlen(a[i]))
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
