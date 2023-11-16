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
	unsigned long int index;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (!item)
	{
		free(item);
		return (0);
	}
	item->key = malloc(strlen(key) + 1);
	if (!item->key)
	{
		free(item->key);
		return (0);
	}
	item->value = malloc(strlen(value) + 1);
	if (!item->value)
	{
		free(item->value);
		return (0);
	}
	strcpy(item->key, key);
	if (!item->key)
		free(item->key);
	strcpy(item->value, value);
	if (!item->value)
		free(item->value);
	index = key_index((const unsigned char *)key, table->size);
	current_item = table->array[index];
	table->array[index] = item;
	if (current_item && strcmp(key, current_item->key) != 0)
	{
		item->next = current_item;
	}
	if (strcmp(key, current_item->key) == 0)
	{
		free(current_item->value);
		free(current_item);
	}

	return (1);
}
