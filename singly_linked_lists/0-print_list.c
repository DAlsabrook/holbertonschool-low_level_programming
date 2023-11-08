#include "lists.h"
/**
 * print_list - prints all of the elements of a list
 * @h: list to print
 * 
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t curr = h;

	while (curr)
	{
		printf("[%d] %s", curr->len curr->str)
		curr = curr->next;
	}

	return (curr->len);
}
