#include "lists.h"
/**
 * print_list - prints all of the elements of a list
 * @h: lists_t list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
		else
		{
			printf("[0] (nil)\n");
			count++;
			h = h->next;
		}
	}

	return (count);
}
