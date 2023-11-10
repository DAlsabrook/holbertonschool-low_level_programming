#include "lists.h"
/**
 * print_listint - prints all elements of list
 * @h: list passed in
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d", h->n);
		return (print_listint(h->next) + 1);
	}
	return (0);
}
