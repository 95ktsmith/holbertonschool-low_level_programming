#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index in a dlistint list
 * @head: Head of the list
 * @index: Index at which to delete a node
 * Return: 1 if successful, -1 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	while (index--)
	{
		if (current_node == NULL)
			return (-1);
		current_node = current_node->next;
	}

	if (current_node->prev != NULL)
		current_node->prev->next = current_node->next;
	else
		*head = current_node->next;

	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;

	free(current_node);
	return (1);
}
