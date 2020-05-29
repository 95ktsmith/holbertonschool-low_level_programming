#include "hash_tables.h"

/**
 * hash_table_create - create a hash table of given size
 * @size: Number of the slots in the hash table
 * Return: A pointer to the hash table if sucessful, NULL if not.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
