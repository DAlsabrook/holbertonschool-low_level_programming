#include "lists.h"
/**
 * add_dnodeint - adds a node to the list
 * @head: head of list
 * @n: data to put in node
 *
 * Return: new node adress
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
