#include "hash_tables.h"

/**
 * hash_table_get - Get the value associated with a key in a hash table
 * @ht: Pointer to hash table
 * @key: Key to look for
 * Return: Pointer to value if successful, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
