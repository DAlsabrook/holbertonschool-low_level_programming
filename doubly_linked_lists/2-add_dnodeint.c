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
	dlistint_t *new_node, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !*head || !n)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
