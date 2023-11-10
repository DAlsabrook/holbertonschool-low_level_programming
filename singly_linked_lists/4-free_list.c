#include "lists.h"
/**
 * free_lists - frees a list of malloc
 * @head: list to be freed
 *
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *node_freer;

	while (head != NULL)
	{
		node_freer = head;
		free(node_freer);
		head = head->next;
	}
}
