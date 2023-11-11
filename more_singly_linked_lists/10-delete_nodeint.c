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
	listint_t *current = *head;
	listint_t *temp = current;
	unsigned int i;

	if (!*head)
		return (-1);
	for (i = 0; i <= index; i++)
	{
		if (i == index && current->next)
		{
			current = current->next;
			if (!current->next)
				*head = current;
			temp->next = current;
			return (1);
		}
		else if (!current->next)
		{
			if (index > i)
				return (-1);
			temp->next = NULL;
			return (1);
		}
		temp = current;
		current = current->next;
	}
	return (-1);
}
