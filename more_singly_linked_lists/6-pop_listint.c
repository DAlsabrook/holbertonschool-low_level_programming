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
	*head = current->next;

	return (current->n);
}
