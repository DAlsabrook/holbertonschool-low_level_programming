#include "lists.h"
/**
 * add_dnode_end - adds a node to the end of a list
 * @head: list to use
 * @n: data for new node
 *
 * Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return(NULL);
	new->n = n;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
