#include "lists.h"
/**
 * add_node_end - adds a node to the end of list
 * @head: head of linked list
 * @str: string to duplicat into list
 *
 * Return: Addres of new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *current = NULL;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str != NULL)
	{
		new_node->str = strdup(str);
		len = strlen(str);
		new_node->len = len;
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
