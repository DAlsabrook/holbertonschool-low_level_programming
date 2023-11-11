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
	unsigned int i = 0;

	current = *head;
	while (current && i < idx)
	{
		current = current -> next;
		i++;
	}
	current->n = n;
	return (current ? current : NULL)
}
