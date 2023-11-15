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

	/*create new node*/
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	/*if list is empty set head to new*/
	if (!*h)
	{
		*h = new;
		return (new);
	}
	/*if index is 0*/
	if (idx == 0)
	{
		new->next = *h;
		return (new);
	}
	/*logic to set the new node at an index*/
	current = *h;
	while (current->next && i < idx)
	{
		current = current->next;
		i++;
	}
	tmp = current;
	current = current->next;
	tmp->next = new;
	new->next = current;
	current->prev = new;
	new->prev = tmp;
	return (new);
}
