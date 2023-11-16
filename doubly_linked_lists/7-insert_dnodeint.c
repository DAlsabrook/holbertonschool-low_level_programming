#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at a given position
 * @h: list to use
 * @idx: index to place node
 * @n: data for new node
 *
 * Return: adress of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp, *current;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (!*h)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	current = *h;
	while (i < (idx - 1))
	{
		if (!current)
			return (NULL);
		current = current->next;
		i++;
	}
	if (current->next)
	{
		tmp = current->next;
		tmp->prev = new;
	}
	new->next = tmp;
	new->prev = current;
	current->next = new;
	new->next = NULL;
	return (new);
}
