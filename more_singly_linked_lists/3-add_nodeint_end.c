#include "lists.h"
/**
 * add_nodeint_end - add node at end of list
 * @head: list to be made
 * @n: int to instert in node
 *
 * Return: adress of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *current = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (!current->next)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
