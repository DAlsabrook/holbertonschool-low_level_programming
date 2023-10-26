#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: Name to print
 * @f: function being passed in
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
