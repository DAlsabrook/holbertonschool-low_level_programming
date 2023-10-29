#include "3-calc.h"
/**
 * main - injection point
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;
	op_t obj;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	obj.f = get_op_func(argv[2]);

	if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	if (obj.f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	ans = obj.f(num1, num2);
	printf("%d\n", ans);

	return (0);
}
