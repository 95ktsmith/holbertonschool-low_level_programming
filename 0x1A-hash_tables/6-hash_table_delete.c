#include "hash_tables.h"

/**
 * free_list - frees a hash_node_t list
 * @head: Head of the list
 */
void free_list(hash_node_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);

	free(head->value);
	free(head->key);
	free(head);
}

/**
 * hash_table_delete - delete hash table
 * @ht: Pointer to the table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
			free_list(ht->array[index]);
		index++;
	}
	free(ht->array);
	free(ht);
}
