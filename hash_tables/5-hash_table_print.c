#include "hash_tables.h"
/**
 *hash_table_print - prints elements in hash
 * @ht: table to use
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int row, flag = 0;
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
				if (current)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
