#include "3-calc.h"
/**
 * main - injection point
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
		return(98);

	if (argc[2] == "/" || argv[2] == "%" && argv[3] == "0")
		printf("Error\n");
		return(100);
}
