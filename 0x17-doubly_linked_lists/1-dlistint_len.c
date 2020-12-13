#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in a double list
 * @h: head of list
 * Return: # of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t node_count;

	if (h == NULL)
		return (0);
	temp = h;
	for (node_count = 0; temp != NULL; node_count++)
		temp = temp->next;
	return (node_count);
}
