#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at and index
 * @head: list to use
 * @index: index to delete node at
 *
 * Return: 1 success. -1 failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *current = *head;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (current->next && i < (index - 1))
	{
		current = current->next;
		i++;
	}
	if (i < index)
		return (-1);
	tmp = current->next;
	current = current->prev;
	free(tmp->prev);
	tmp->prev = current;
	current->next = tmp;

	return (1);
}
