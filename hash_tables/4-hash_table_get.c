#include "hash_tables.h"
/**
 * hash_table_get - get a value from node with key
 * @key: key to look for
 * @ht: table to look through
 *
 * Return: the value at that node
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int row;
	hash_node_t *current;

	if (!ht || !key)
		return (NULL);
	for (row = 0; row < ht->size; row++)
	{
		current = ht->array[row];
		while (current)
		{
			if (strcmp((char *)key, current->key) == 0)
			{
				return (current->value);
			}
			current = current->next
		}
	}
	return (NULL);
}
