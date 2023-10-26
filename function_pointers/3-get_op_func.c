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

	if (s != ops[0][1] || s != ops[1][1] || s != ops[2][1] || s != ops[3][1] || s != ops[4][1])
}
