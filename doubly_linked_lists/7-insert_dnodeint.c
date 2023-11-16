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
	unsigned int i = 1;

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
		*h = new;
		return (new);
	}
	/*loop to get to correct node*/
	current = *h;
	while (i < (idx - 1))
	{
		if (!current)
			return(NULL);
		current = current->next;
		i++;
	}
	/*set new node pointers*/
	if(!current->next)
	{
		tmp = current->next;
		current->next = new;
		tmp->prev = new;
		new->next = tmp;
		new->prev = current;
	}
	else
	{
		current->next = new;
		new->prev = current;
		new->next = NULL
	}
	return (new);
}
