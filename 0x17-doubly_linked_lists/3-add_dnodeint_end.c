#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a dlistint list
 * @head: Head of the list
 * @n: Value to give the new node
 * Return: Address of the new node, or NULL in failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (current_node == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (current_node->next != NULL)
		current_node = current_node->next;
	new_node->prev = current_node;
	current_node->next = new_node;
	return (new_node);
}
