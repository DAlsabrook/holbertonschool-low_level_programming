#include "main.h"
#include <stdio.h>
/**
 * main - runs the program
 *
 * Return: name of program
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");

	return (0);
}
