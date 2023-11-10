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
	int tmp;

	if(!head || !*head)
		return(0);
	tmp = (*head)->n;
	*head = (*head)->next;

	return (tmp);
}
