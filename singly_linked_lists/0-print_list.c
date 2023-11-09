#include "lists.h"
/**
 * print_list - prints all of the elements of a list
 * @h: lists_t list to print
 * 
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	while (h->next != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
			printf("[0] (nil)\n");
	}

	return (h->len);
}
