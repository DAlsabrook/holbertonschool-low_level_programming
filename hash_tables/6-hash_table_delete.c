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
	hash_node_t *node, *tmp;
	unsigned long int row;
	/*loop through table rows*/
	for (row = 0; row <= ht->size; row++)
	{
		/*check if row is there*/
		if (ht->array[row])
		{
			node = ht->array[row];
			/*loop through rows nodes and free*/
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	/*free the **array and the table*/
	free(table->array);
	free(table);
}
