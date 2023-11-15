#include "lists.h"
/**
 * dlistint_len - gets number of elements in list
 * @h: list to use
 *
 * Return: number of elements in list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
