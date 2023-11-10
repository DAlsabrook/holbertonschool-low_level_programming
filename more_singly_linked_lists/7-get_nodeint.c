#include "lists.h"
/**
 * get_nodeint_at_index - get node at nth index
 * @index: the index starting at 0
 * @head: list to check
 *
 * Return: adress of node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = NULL;
	unsigned int i = 0;

	current = head;
	while (current && i < index)
	{
		current = head->next;
		i++;
	}

	return (current);
}
