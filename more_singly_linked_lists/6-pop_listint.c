#include "lists.h"
/**
 * pop_listint - deleted head
 * @head: list
 *
 * Return: data from deleted head
*/
int pop_listint(listint_t **head)
{
	listint_t *current = NULL;

	if(!head)
		return(0);
	current = *head;
	free(*head);
	*head = (*head)->next;

	return (current->n);
}
