#include "lists.h"
/**
 * list_len - list the length of elements in list_t
 * @h: head of list
 *
 * Return: count of nodes
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}