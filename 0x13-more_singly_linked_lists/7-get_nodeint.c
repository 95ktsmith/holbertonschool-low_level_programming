#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * Description: Gets the nth node of a list, where the head is the 0th node.
 * @head: Head of the list
 * @index: Desired node
 * Return: The node if it exists, or NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index--)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (head);
}
