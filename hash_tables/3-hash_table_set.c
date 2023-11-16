#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @value: data for inserted node
 * @key: key to use
 * @ht: table to use
 *
 * Return: 1 on success. 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int i;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->value = value;
	new_node->key = key_index(key, ht->size);
	
	for (i = 0; i < new_node->key; i++)
	{
		continue;
	}
	ht->array[i] = new_node;
	return (1);
}
