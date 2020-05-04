#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index in a dlistint list
 * @h: Address of the head of the list
 * @idx: Index at which to insert the node
 * @n: Value to give the node
 * Return: Address of the new node, or NULL in failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = *h, *prev_node = NULL;

	if (h == NULL)
		return (NULL);

	while (idx--)
	{
		if (current_node == NULL)
			return (NULL);
		prev_node = current_node;
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = prev_node;
	new_node->next = current_node;

	if (prev_node != NULL)
		prev_node->next = new_node;
	else
		*h = new_node;

	if (current_node != NULL)
		current_node->prev = new_node;

	return (new_node);
}
