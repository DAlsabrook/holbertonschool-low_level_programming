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
	list_t *current;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->str = strdup(str);
	current = *head;
	while (current != NULL)
	{
		current->next = new_node;
	}
	new_node->next = NULL;
	return(new_node);
}
