#include "lists.h"
/**
 * free_listint - frees a list of memory
 * @head: list to free
 * 
 * Return: void
*/
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head->n);
		free(head);
	}
}
