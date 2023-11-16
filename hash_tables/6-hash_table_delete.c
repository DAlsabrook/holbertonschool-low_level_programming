#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: table to use
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *node;
	unsigned long int row = 0;
	/*loop through table rows*/
	while (row < ht->size)
	{
		/*check is row is null*/
		while (ht->array[row])
		{
			node = ht->array[row]->next;
			free(ht->array[row]->key);
			free(ht->array[row]->value);
			free(ht->array[row]);
			ht->array[row] = node;
		}
		row++;
	}
	/*free the **array and the table*/
	free(table->array);
	free(table);
}
