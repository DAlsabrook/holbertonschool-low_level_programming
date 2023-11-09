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
	new_node->str = stdup(*str);
	*head = new_node;

	if (new_node == NULL)
		return (NULL);

	return(new_node);
}
