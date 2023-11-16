#include "hash_tables.h"
/**
 * key_index - creates a key to the hash table
 * @key: key
 * @size: size of array of hash table
 *
 * Return: index which the key/value was stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key);
	key_index %= size;

	return (key_index);
}
