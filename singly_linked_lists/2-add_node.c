#include "lists.h"
/**
 * add_node - adds node at beggining
 * @str: string to copy to new node
 *
 * Return: adress to new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return(NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return(new_node);
}
