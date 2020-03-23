#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * Description: Inserts a node at a specific position in the list
 * @head: Address of the head of the list
 * @idx: Desired position in list
 * @n: Integer to give the new node
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *index, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!(*head))
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	index = *head;
	while (--idx)
	{
		if (index->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		index = index->next;
	}
	new_node->next = index->next;
	index->next = new_node;
	return (new_node);
}
