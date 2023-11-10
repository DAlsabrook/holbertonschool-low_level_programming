#include "lists.h"
/**
 * free_list - frees a list of malloc
 * @head: list to be freed
 *
 * Return: void
*/
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
		free(head->len);
		free(head);
	}
}
