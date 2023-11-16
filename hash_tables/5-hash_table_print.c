#include "hash_tables.h"
/**
 *
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int row;
	hash_node_t *current;
	if (!ht)
		return;
	putchar('{');
	for (row = 0; row < ht->size; row++)
	{
		current = ht->array[row];
		while (current)
		{
			if (row >= ht->size && !current->next)
				printf("'%s': '%s'", current->key, current->value);
			else
				printf("'%s': '%s', ", current->key, current->value);
			current = current->next;
		}
	}
	putchar('}');
	return;
}
