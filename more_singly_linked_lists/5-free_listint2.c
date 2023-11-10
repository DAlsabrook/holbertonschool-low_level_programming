#include "lists.h"
/**
 * free_listint2 - free list double pointer
 * @head: list to free
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current = NULL;
	if (!*head)
		return;
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
