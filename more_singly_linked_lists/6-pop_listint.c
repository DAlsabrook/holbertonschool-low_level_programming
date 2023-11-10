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
	int tmp;

	if(!head || !*head)
		return(0);
	tmp_l = (*head)->next;
	tmp = (*head)->n;
	free(*head);
	*head = (tmp_l)->next;

	return (tmp);
}
