#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node and index
 * @head: list to use
 * @index: index to delete
 *
 * Return: 1 on success. -1 on fail.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
