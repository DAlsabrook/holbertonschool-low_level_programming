#include "lists.h"
/**
 * add_dnodeint - adds a node to the list
 * @head: head of list
 * @n: place to add new node
 *
 * Return: new node adress
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *new_node, *tmp, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (!*head)
	{
		*head->next = new_node;
		new_node->prev = *head;
		return (new_node);
	}
	for (i = 0; i < n; i++)
	{
		tmp = current;
		current = current->next;
	}
	new_node->next = current;
	new_node->prev = tmp;
	current->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
