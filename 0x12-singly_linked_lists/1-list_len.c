#include "lists.h"

/**
 * list_len - list length
 * Description: Finds the number of elements in a linked list
 * @h: Head of the list
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t elements = 1;
	list_t *node;

	if (!h)
		return (0);

	node = h->next;
	while (node)
	{
		elements++;
		node = node->next;
	}
	return (elements);
}
