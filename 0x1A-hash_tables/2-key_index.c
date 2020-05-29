#include "hash_tables.h"

/**
 * key_index - determine the index a key should have in a hash table
 * @key: String to use as key
 * @size: Size of the table
 * Return: Index to assign key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
