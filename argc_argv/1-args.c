#include "main.h"
#include <stdio.h>
/**
 * main - gets amount of arguments passed into it
 * @argc: count of arguments
 *
 * Return: number of arguments
 */
int main(char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		continue;
	}
	printf("%d", i);

	return (0);
}
