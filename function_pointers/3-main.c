#include "3-calc.h"
/**
 * main - injection point
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = get_op_func(argv[2]);

	if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	if (res == NULL)
	{
		printf("Error\n");
		return (99);
	}

	ans = res(num1, num2);
	printf("%d\n", ans);

	return (0);
}
