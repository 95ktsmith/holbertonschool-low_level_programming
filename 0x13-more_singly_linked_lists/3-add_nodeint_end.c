#include "lists.h"

/**
 * add_nodeint_end - add node at end
 * Description: Adds a node at the end of a list
 * @head: Address of the head node
 * @n: Integer to give the new node
 * Return: Address of the new node, or NULL in failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *start;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
		*head = new_node;
	else
	{
		start = *head;
		while ((*head)->next)
			*head = (*head)->next;
		(*head)->next = new_node;
		*head = start;
	}
	return (new_node);
}
