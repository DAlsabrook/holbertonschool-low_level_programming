#include "main.h"
#include <stdio.h>
/**
 * main - gets amount of arguments passed into it
 * @argc: count of arguments
 * @argv: array to hold arguments
 *
 * Return: number of arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
