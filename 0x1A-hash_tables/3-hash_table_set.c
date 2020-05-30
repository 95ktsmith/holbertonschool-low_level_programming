#include "hash_tables.h"
#include "string.h"

/**
 * _strcmp - String compare
 * Description: Compares two strings to check if they are exactly the same
 * @s1: String 1
 * @s2: String 2
 * Return: 1 if they are the same, or 0 if they are different
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	if (s1[index] || s2[index])
		return (0);
	return (1);
}

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

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || key[0] == '\0')
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[index] && _strcmp(ht->array[index]->key, (char *)key))
	{
		ht->array[index]->value = strdup(value);
		if (ht->array[index]->value == NULL)
			return (0);
		return (1);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL && value != NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
