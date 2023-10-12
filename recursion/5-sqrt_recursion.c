#include "main.h"
/**
 * _sqrt_recursion - Find square root
 * find_root - finds sqrt
 * @n: number to find square root of
 *
 * Return: sqaure root
 */
int find_root(int num, int root);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(n, 0));
}

int find_root(int num, int root)
{
	if (root * root > num)
	{
		return (-1);
	}
	else if (root * root == num)
	{
		return (root);
	}
	return (find_root(num, root - 1));
}
