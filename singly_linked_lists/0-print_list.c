#include "lists.h"
/**
 * print_list - prints all of the elements of a list
 * @h: list to print
 * 
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s", h->len, h->str)
			h = h->next;
		}
		else
			printf("[0] (nil)");
	}

	return (curr->len);
}
