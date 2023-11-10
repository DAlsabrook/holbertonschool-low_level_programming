#include "lists.h"
/**
 * add_nodeint -adds new node to beginning
 * @head: list passed in
 * @n: int to put in node
 *
 * Return: adress of node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
