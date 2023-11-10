#include "lists.h"
/**
 * get_node_at_index - get node at nth index
 * @index: the index starting at 0
 *
 * Return: adress of node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}

	return (head);
}
