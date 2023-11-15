#include "lists.h"
/**
 * print_dlistint - prints all elements of dlist
 * @h: list to use
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d", h->n);
		h = h->next;
	}
	return (i);
}
