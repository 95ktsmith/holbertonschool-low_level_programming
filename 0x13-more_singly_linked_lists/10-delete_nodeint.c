#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * Description: Deletes a node at a specific index in a list
 * @head: Address of the head of the list
 * @index: Node to be deleted
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_tmp, *prev_tmp, *next_tmp;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		next_tmp = (*head)->next;
		free(*head);
		*head = next_tmp;
		return (1);
	}

	node_tmp = *head;
	while (--index)
	{
		if (node_tmp->next == NULL)
			return (-1);
		node_tmp = node_tmp->next;
	}
	prev_tmp = node_tmp;

	if (node_tmp->next == NULL)
		return (-1);

	node_tmp = node_tmp->next;
	next_tmp = node_tmp->next;

	free(node_tmp);
	prev_tmp->next = next_tmp;
	return (1);
}
