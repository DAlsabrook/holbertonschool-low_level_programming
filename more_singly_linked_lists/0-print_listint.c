#include "lists.h"
/**
 * print_listint - prints all elements of list
 * @h: list passed in
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h)
	{
		count += print_listint(h->next);
		h = h->next;
		printf("%d", h->n);
	}
	return (count + 1);
}
