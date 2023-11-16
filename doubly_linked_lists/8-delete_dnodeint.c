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
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (i < index - 1)
	{
		if (!current)
			return (-1);
		current = current->next;
		i++;
	}
	tmp = current->next;
	if (current->next != NULL)
	{
		current = current->prev;
		tmp->prev = current;
		current->next = tmp;
	}
	return (1);
}
