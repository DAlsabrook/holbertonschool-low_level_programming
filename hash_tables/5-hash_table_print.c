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
	for (row = 0; row < (ht->size - 1); row++)
	{
		current = ht->array[row];
		while (current)
		{
			printf("'%s': '%s', ", current->key, current->value);
			current = current->next;
		}
	}
	putchar('}');
	return;
}
