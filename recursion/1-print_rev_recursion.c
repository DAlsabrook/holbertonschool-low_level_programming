#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s: string to reverse
 *
 * Return:void
 */
void _print_rev_recursion(char *s)
{
 	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(--s);
	}
}
