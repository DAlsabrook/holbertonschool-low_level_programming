#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of list
 * @head: list to use
 * @index: index to use
 *
 * Return: adress of nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	current = head;
	while (current->next && i < index)
	{
		current = current->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (current);
}
