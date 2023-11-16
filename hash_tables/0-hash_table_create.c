#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of table
 * 
 * Return adress of table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t*));

	for (i = 0; i < table->size; i++)
	{	
		table->array[i] = NULL;
	}

	return (table);
}
