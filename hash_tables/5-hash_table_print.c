#include "hash_tables.h"
/**
 *
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int row , flag = 0;
	hash_node_t *current;
	if (!ht)
		return;
	putchar('{');
	for (row = 0; row < ht->size; row++)
	{
		if (ht->array[row])
		{
			if (flag == 1)
				printf(", ");
			current = ht->array[row];
			while (current)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
			flag = 1;
		}
	}
	putchar('}');
	return;
}
