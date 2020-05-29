#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints all elements in a hash table
 * @ht: Pointer to hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *node;
	unsigned int first_element = 1;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");

	while (index++ < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (!first_element)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			first_element = 0;
		}
	}
	printf("}\n");
}
