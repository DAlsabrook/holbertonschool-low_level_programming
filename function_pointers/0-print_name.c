#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: Name to print
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
