#include "lists.h"
/**
 * sum_dlistint - returns sum of all nodes
 * @head: list to use
 *
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	if (head)
		return(sum_dlistint(head->next) + head->n);
	return (0);
}
