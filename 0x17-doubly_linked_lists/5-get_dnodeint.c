#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at index in a dlistint list
 * @head: Head of the list
 * @index: Index of the node to get
 * Return: The node at index, or NULL in failure.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index--)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
