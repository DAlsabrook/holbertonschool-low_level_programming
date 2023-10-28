#include "3-calc.h"
/**
 * main - injection point
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	op_t calc;
	int *funcAddress;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	funcAddress = get_op_func(op);

	if (argc != 3)
	{
		printf("Error\n");
		return(98);
	}
	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		return(100);
	}
	if (funcAddress == NULL)
	{
		printf("Error\n")
		return(99);
	}

	calc.f = funcAddress;
	result = calc.f(num1, num2);
	printf("%d\n", result);

	return (0);
}
