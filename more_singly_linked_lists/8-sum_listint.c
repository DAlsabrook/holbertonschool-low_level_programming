#include "lists.h"
/**
 * sum_listint - list sum of data from all nodes
 * @head: list to check
 * 
 * Return: sum of data
*/
int sum_listint(listint_t *head)
{
	if (head)
	{
		return (sum_listint(head->next) + head->n);
	}
	return (0);
}
