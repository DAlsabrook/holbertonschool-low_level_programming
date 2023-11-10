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

	if(!head || !*head)
		return(0);
	while (*head)
	{
		tmp_l = (*head)->next;
		i = (*head)->n;
		free(*head);
		*head = tmp_l;
	}
	
	return (i);
}
