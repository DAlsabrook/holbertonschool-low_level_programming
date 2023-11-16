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
	hash_node_t *item, *current_item;
	hash_table_t *table = ht;
	unsigned long int i, index;
	/*create item and allocate memory for item and values inside item*/
	item = malloc(sizeof(hash_node_t));
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	if (!item || !item->value || !item->key)
		return (0);
	/*assign item values*/
	strcpy(item->key, key);
	strcpy(item->value, value);
	/*get index with key*/
	index = key_index(key);

	current_item = table->array[index];

	if (!current_item)
	{
		table->array[index] = item;
	}
	return (1);
}
