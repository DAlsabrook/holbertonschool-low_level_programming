#include "lists.h"
/**
 * pop_listint - deleted head
 * @head: list
 *
 * Return: data from deleted head
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp_l;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	tmp_l = (*head)->next;
	free(*head);
	*head = tmp_l;

	return (i);
}
