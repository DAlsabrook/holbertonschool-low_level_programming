#include "lists.h"
/**
 * free_list - frees a list of malloc
 * @head: list to be freed
 *
 * Return: void
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
