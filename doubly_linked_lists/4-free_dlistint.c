#include "lists.h"
/**
 * free_dlistint - frees a dlistint
 * @head:list to free
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
