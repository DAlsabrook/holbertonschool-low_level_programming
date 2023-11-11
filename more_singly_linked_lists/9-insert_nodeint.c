#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at n position
 * @head: list to use
 * @idx: index to insert
 * @n: data to put in node
 *
 * Return: adress of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = NULL;
	listint_t *new = NULL;
	listint_t *tmp = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	current = *head;
	while (current && i < (idx - 1))
	{
		current = current->next;
		i++;
	}
	tmp = current;
	current = current->next;
	tmp->next = new;
	new->next = current;

	if (new)
		new->n = n;
	return (new);
}
