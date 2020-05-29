#include "hash_tables.h"
#include "string.h"

/**
 * hash_table_set - Set a key and value into a slot in the table
 * @ht: Pointer to the hash table
 * @key: String to use for key
 * @value: String to use for value
 * Return: 1 if successful, 0 if not.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || key == NULL ||
		key[0] == '\0' || value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	node->key = (char *)key;
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
