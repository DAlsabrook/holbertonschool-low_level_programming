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
    int i = 0;

	while (i < 5)
	{
		if (ops[i].op != NULL)
		{
			return(ops[i].f);
		}
		i++;
	}
	return (NULL);
}
