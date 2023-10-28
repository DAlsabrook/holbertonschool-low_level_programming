#include "3-calc.h"
/**
 * main - injection point
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	op_t calc;

	if (argc != 4)
        {
                printf("Error\n");
                return(98);
        }

	num1 = atoi(*argv[1]);
	num2 = atoi(*argv[3]);

	if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
	{
		printf("Error\n");
		return(100);
	}
	if (get_op_func(*argv[2]) == NULL)
	{
		printf("Error\n");
		return(99);
	}

	calc.f = get_op_func(*argv[2]);
	result = calc.f(num1, num2);
	printf("%d\n", result);

	return (0);
}
