#include "lists.h"
/**
 * free_listint2 - free list double pointer
 * @head: list to free
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	while (*head)
	{
		*head = (*head)->next;
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
