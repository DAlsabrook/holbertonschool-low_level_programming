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

	current->n = (*head)->n;
	free(*head);

	return (current->n);
}
