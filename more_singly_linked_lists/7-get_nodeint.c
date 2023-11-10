#include "lists.h"
/**
 * get_node_at_index - get node at nth index
 * @index: the index starting at 0
 * @head: list to check
 *
 * Return: adress of node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = NULL;
	unsigned int i;

	current = head;
	for (i = 0; i <= index; i++)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}

	return (current);
}
