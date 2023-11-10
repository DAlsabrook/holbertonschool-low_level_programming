#include "lists.h"
/**
 * listint_len - list length of list
 * @h: list passed in
 * 
 * Return: amount of nodes
*/
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		return (listint_len(h->next) + 1);
	}
	return (0);
}
