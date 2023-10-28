#include "3-calc.h"
/**
 * get_op_func - selects correct function asked by user
 * @s: operator passed by user as string
 *
 * Return: pointer to the function that corresponds with user input
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	while (i < 5)
	{
		if (s == ops[i][0])
		{
			return(ops[i][1]);
		}
		i++;
	}
	return (NULL);
}
